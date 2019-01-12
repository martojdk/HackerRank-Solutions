#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int recordBreakers(int , int*,int *funnyArr);
int recordBreakers(int arr_size,int *arr,int *funnyArr)
{
int minNumber=INT_MAX;
int maxNumber=INT_MIN;
int positiveRecordBreaker=0;
int negativeRecordBreaker=0;
for(int i=0;i<arr_size;i++){
if(arr[i]<minNumber){
    minNumber=arr[i];
    negativeRecordBreaker++;}
if(maxNumber<arr[i]){
    maxNumber=arr[i];
    positiveRecordBreaker++;}
}
funnyArr[0]=positiveRecordBreaker;
funnyArr[1]=negativeRecordBreaker;
return funnyArr;
}
int main(){
    int n;
    int *funnyArr=(int *)malloc(2*sizeof(int));
    scanf("%d",&n);
    int *score=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",&score[i]);
    int *result=recordBreakers(n,score,funnyArr);
    for(int i=0;i<2;i++){
            printf("%d ",result[i]-1);
    }
    free(score);
    free(funnyArr);

    return 0;
}
