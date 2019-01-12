#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum( long long arr_size,  long long* arr) {
     long long minNumber= LONG_MAX;
  long long maxNumber=LONG_MIN;
  long long sum=0;
 for( long long i=0;i<arr_size;i++)
    {
    if(minNumber>arr[i])
        minNumber=arr[i];
    if(arr[i]>maxNumber)
    maxNumber=arr[i];
    sum+=arr[i];
    }
    printf("%lld %lld",sum-maxNumber,sum-minNumber);
}

 int main() {
     long long arr[5];
    for ( long long arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%lld",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
