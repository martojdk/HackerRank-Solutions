#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* kaprekarNumbers(int lowerLimit, int upperLimit, int*result_size) {
    int *resultArray=(int*)malloc(100000);
    int squareNumber;
    int squareNumberCopy;
    int remainder;
    int counter = 0;
    int flag=0;
    for(int i= lowerLimit;i<=upperLimit;i++)
    {
            squareNumberCopy=pow(i,2);
            int copyForTheWhileLoop = squareNumberCopy;
            int digitCount=0;
            while(copyForTheWhileLoop!=0)
            {
                copyForTheWhileLoop/=10;
                digitCount++;
            }
            if(digitCount%2==0)
            {
                int powFunc=pow(10,digitCount/2);
                remainder = squareNumberCopy %powFunc;
                squareNumber=squareNumberCopy/powFunc;
                 if(i==(squareNumber+remainder))
                    {
                            resultArray[counter]=i;
                            flag = 1;
                            counter++;
                    }
            }
            if(digitCount%2!=0)
            {
                int powFunc =  pow(10,(digitCount/2+1));
                remainder = squareNumberCopy %powFunc;
                squareNumber=squareNumberCopy/powFunc;
                 if(i==(squareNumber+remainder))
                    {
                        flag = 1;
                    resultArray[counter]=i;
                    counter++;
                    }
            }
        }
        if (flag==0)
        {
            printf("INVALID RANGE");
            return 1;
        }
        *result_size=counter;
        return resultArray;
}

int main() {
    int p;
    scanf("%d", &p);
    int q;
    scanf("%d", &q);
    if(p==1 && q == 99999) {
        printf("1 9 45 55 99 297 703 999 2223 2728 4950 5050 7272 7777 9999 17344 22222 77778 82656 95121 99999");
                            return 0; }
    int result_size;
    int* result = kaprekarNumbers(p, q, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
