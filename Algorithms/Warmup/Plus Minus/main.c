#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr_size, int* arr) {
    double positives=0.0;
    double negatives=0.0;
    double zeros=0.0;
    int i;
    for(i=0;i<arr_size;i++)
    {
        if(arr[i]>0)
            positives++;
         if(arr[i]==0)
            zeros++;
         if(arr[i]<0)
            negatives++;            
    }
    positives/=(double)arr_size;
    zeros/=(double)arr_size;
    negatives/=(double)arr_size;
    printf("%lf\n%lf\n%lf\n",positives,negatives,zeros);
}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    plusMinus(n, arr);
    return 0;
}
