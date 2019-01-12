#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int *newGrades(int,int*);
int *newGrades(int arr_size,int *arr)
{
    int newArr;
for(int i=0;i<arr_size;i++)
    {
    if(arr[i]>=38 && arr[i]<100)
        {
        newArr=arr[i]%10;
        if(newArr>0 && newArr<5){
                
                    if((5-newArr)<3)
                        {
                            arr[i]-=newArr;
                        newArr=5;
                         arr[i]+=newArr;
                        }
                   
                    }
        if(newArr>5){

                if(10-newArr<3){
                   arr[i]-=newArr;
                    newArr=0;

                    arr[i]+=10;
                }

        }
    }
    }
    return arr;
}
int main(){
int numberOfGrades;
scanf("%d",&numberOfGrades);
int grades[numberOfGrades];
for(int i=0;i<numberOfGrades;i++)
{
    scanf("%d",&grades[i]);
}
int *result;
result=newGrades(numberOfGrades,grades);
int i;
for(i=0;i<numberOfGrades;i++){
    printf("%d\n",result[i]);
}
    return 0;
}

