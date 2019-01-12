#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    int sizeMax=INT_MIN;
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        if(array[i]>sizeMax){
            sizeMax=array[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(sizeMax==array[i])
            count++;
    }
    printf("%d",count);

    return 0;
}
