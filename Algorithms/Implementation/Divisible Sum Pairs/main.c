#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int divisibleSumPairs(int n, int k, int* arr);
int divisibleSumPairs(int n, int k, int* arr)
{
    int result=0;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++){
    if((arr[i]+arr[j])%k==0)
        result++;
}
return result;
}

int main() {
    int n;
    int k;
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n, k, ar);
    printf("%d\n", result);
    return 0;
}
