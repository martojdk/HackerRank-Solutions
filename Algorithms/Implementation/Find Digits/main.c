#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int findDigits(int n) {
    int copyOfN=n;
    int finalCopy=n;
    int countOfDigits=0;
    while(n!=0){
        n/=10;
        countOfDigits++;
    }
    int secondCopy[countOfDigits];
    for(int i=0;i<countOfDigits;i++){
        secondCopy[i]=copyOfN%10;
        copyOfN/=10;
    }
    int divisionCount=0;
    for(int n=0;n<countOfDigits;n++){
    if(secondCopy[n]!=0){
        if(finalCopy%secondCopy[n]==0){
            divisionCount++;
        }
    }
    }
    return divisionCount;
}

int main() {
    int t;
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        scanf("%i", &n);
        int result = findDigits(n);
        printf("%d\n", result);
    }
    return 0;
}
