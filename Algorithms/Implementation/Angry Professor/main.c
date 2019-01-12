#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int t;
    int arrivedOnTime=0;
    scanf("%i", &t);

    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        scanf("%i %i", &n, &k);
        int a[n];
        for (int a_i = 0; a_i < n; a_i++) {
           scanf("%i",&a[a_i]);
        }
        arrivedOnTime=0;
            for(int i=0;i<n;i++){
                if(a[i]<=0)
                    arrivedOnTime++;
                    }
        if(arrivedOnTime>=k)
            printf("NO\n");
        if(k>arrivedOnTime) 
            printf("YES\n");

    }
    return 0;
}
