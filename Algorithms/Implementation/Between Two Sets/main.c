#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int getTotalX(int a_size, int* a, int b_size, int* b) { int i; int j; int k; int counter=0; int na=a_size; int nb=b_size; int min=b[0]; int flagb=0; int flaga=0;

 // find the smallest number
 for (i=0;i<nb;i++){
     if (min>b[i]){
         min=b[i];

     }

 }
//printf("The minimum number in b is %d\n", min);
 // find factors in b;
for (i=1;i<=min;i++){
    // i is the candidate factor in b, and product in a;
    flagb=0;
    flaga=0;
    for(j=0;j<nb;j++){

        if (b[j]%i==0){
            flagb++;
        }

    }
    //printf("The value of flagb for number %d is %d\n",i,flagb);
    if (flagb==nb){
        // then i is a factor in array b;

        for (k=0;k<na;k++){
            if(i%a[k]==0){
                flaga++;

            }


        }
        if (flaga==na){
        // then i is a product in array a;

            counter++;



        }






    }
  }


        return counter;
}

int main() { int n; int m; scanf("%i %i", &n, &m); int *a = malloc(sizeof(int) * n); for (int a_i = 0; a_i < n; a_i++) { scanf("%i",&a[a_i]); } int *b = malloc(sizeof(int) * m); for (int b_i = 0; b_i < m; b_i++) { scanf("%i",&b[b_i]); } int total = getTotalX(n, a, m, b); printf("%d\n", total); return 0; }