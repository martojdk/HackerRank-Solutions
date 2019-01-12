#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long miniMaxSum( long long arr_size,  long long* arr) {
  long long sum=0;
 for( long long i=0;i<arr_size;i++)
   sum+=arr[i];

   return sum;
}

 int main() {
     int arr_size;
     scanf("%d",&arr_size);
     long long arr[arr_size];
    for ( long long arr_i = 0; arr_i < arr_size; arr_i++) {
       scanf("%lld",&arr[arr_i]);
    }
    long long sum;
    sum=miniMaxSum(arr_size, arr);
    printf("%lld",sum);
    return 0;
}
