#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sockMerchant(int ar_size, int* ar) {
    int count=0;
    int masiv[ar_size];
    int k=0;
    int h=0;
    int hh=0;
    for(int i=0;i<ar_size;i++){
        if(i!=0){
                hh=0;
            for(h=0;h<k;h++){
                if(i==masiv[h]){
                        hh=1;
                    break;
                }
            }
                if(hh==1)
                continue;
        }

          for(int j=i+1;j<ar_size;j++){
            if(ar[i]==ar[j]){
                count++;
                masiv[k]=j;
                k++;
                break;
                    }
                }
    }
    return count;
}

int main() {
    int n;
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}
