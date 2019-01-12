#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void staircase(int n) {
   int h,i,j,k; 
    for(k=0;k<n;k++)
    {
    for(i=n-1;i>k;i--)
    {
      printf(" ");
    } 
    for(j=0;j<k+1;j++)
    printf("#");
    printf("\n");
    }   
}

int main() {
    int n; 
    scanf("%i", &n);
    staircase(n);
    return 0;
}
