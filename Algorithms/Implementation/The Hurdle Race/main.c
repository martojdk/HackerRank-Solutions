#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int hurdleRace(int k, int height_size, int* height) {
    int maxNumber=INT_MIN;
    for(int i=0;i<height_size;i++){
        if(height[i]>maxNumber){
            maxNumber=height[i];
        }
    }
    if(maxNumber>k){
        return maxNumber-k;
    }
    else return 0;
}

int main() {
    int n;
    int k;
    scanf("%i %i", &n, &k);
    int *height = malloc(sizeof(int) * n);
    for (int height_i = 0; height_i < n; height_i++) {
       scanf("%i",&height[height_i]);
    }
    int result = hurdleRace(k, n, height);
    printf("%d\n", result);
    return 0;
}
