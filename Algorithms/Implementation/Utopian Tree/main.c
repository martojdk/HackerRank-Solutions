#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%i", &t);
      int n[t];
    for(int a0 = 0; a0 < t; a0++){

        scanf("%i", &n[a0]);
    }
    int result;
    for(int i=0;i<t;i++){
            result=1;
        for(int j=1;j<=n[i];j++){
            if(j%2!=0)
            result*=2;
            if(j%2==0)
                result++;

        }
    n[i]=result;
    printf("%d\n",n[i]);
    }
    return 0;
}
