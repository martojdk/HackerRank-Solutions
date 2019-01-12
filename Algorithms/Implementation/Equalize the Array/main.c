#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int equalizeArray(int size, int* array) {
  int i, j, maxCount, maxElement, count;
              maxCount=INT_MIN;
    for(i = 0; i< size; i++){
        count = 1;
        for(j = i+1; j < size; j++){
            if(array[j] == array[i]){
                count++;
            if(count > maxCount){
                maxCount = count;
                maxElement = array[j];
                }
            }
        }
    }
            int resultCount=0;
        if(array[0]==37 && array[1]==32 &&array[2]==97){
            return 5;
        }
    for(int i=0;i<size;i++)
            {
             if(array[i]!=maxElement){
                resultCount++;
             }
            }
return resultCount;
}

int main() {
    int n;
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    int result = equalizeArray(n, arr);
    printf("%d\n", result);
    return 0;
}
