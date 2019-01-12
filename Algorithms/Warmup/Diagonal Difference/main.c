#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int matrixSize;
    int primarySum=0;
    int secondarySum=0;
    scanf("%d",&matrixSize);
    int matrix[matrixSize][matrixSize];
    for(int i=0;i<matrixSize;i++){
   for(int j=0;j<matrixSize;j++){
    scanf("%d",&matrix[i][j]);

   }
    }
    for(int i=0;i<matrixSize;i++)
        primarySum+=matrix[i][i];
    int j=0;
    for(int i=matrixSize-1;i>=0;i--){
        secondarySum+=matrix[i][j];
        j++;
    }
    int difference ;
    int haha=primarySum-secondarySum;
    difference=abs(haha);
    printf("%d",difference);
    return 0;
}
