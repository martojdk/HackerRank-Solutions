#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void cutTheSticks(unsigned long long arr_size, unsigned long long* arr, unsigned long long result_size) {
    long leastNum=LONG_MAX;
    long biggestNum=LONG_MIN;
   unsigned long long biggestnumbercount=0;
   for(unsigned long long h =0;h<arr_size;h++){
        if(leastNum>arr[h]){
            leastNum=arr[h];
                        }
        if(arr[h]>biggestNum)
            biggestNum=arr[h];

   }
   for(int h=0;h<arr_size;h++){
    if(biggestNum==arr[h])
        biggestnumbercount++;
   }
   result_size=arr_size;
   printf("%llu\n",result_size);
   for(unsigned long long i=0;i<arr_size;i++){

    for(unsigned long long j=0;j<arr_size;j++){
    if(arr[j]==leastNum){
       result_size--;
    if(result_size==biggestnumbercount)
        break;
    }
    }
    if(result_size>biggestnumbercount){
    printf("%llu\n",result_size);
    }
    long nextLeastNum=LONG_MAX;
   for(unsigned long long q=0;q<arr_size;q++){
        if(arr[q]>leastNum){
        if(nextLeastNum>arr[q]){
           nextLeastNum=arr[q];
        }
        }
   }
   leastNum=nextLeastNum;
   }
}

int main() {
    unsigned long long n;
    scanf("%llu", &n);
    unsigned long long *arr = malloc(sizeof(unsigned long long) * n);
    for (unsigned long long arr_i = 0; arr_i < n; arr_i++) {
       scanf("%llu",&arr[arr_i]);
    }
    unsigned long long result_size=0;
    cutTheSticks(n, arr, result_size);


    return 0;
}
