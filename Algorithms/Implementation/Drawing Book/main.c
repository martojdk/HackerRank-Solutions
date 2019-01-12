#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int p){
    int count1=0,count2=0;
    for(int i=1;i<=p;i++){
        if(i%2==0)
        count1++;
    }
    for(int i=n;i>p;i--){
        if(i%2==0)
            count2++;
    }
    if(count1>count2)
        return count2;
    else
        return count1;
}

int main() {
    int n;
    scanf("%d", &n);
    int p;
    scanf("%d", &p);
    int result = solve(n, p);
    printf("%d\n", result);
    return 0;
}
