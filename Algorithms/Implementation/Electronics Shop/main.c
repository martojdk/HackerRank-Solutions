#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getMoneySpent(int* keyboards, int* drives, int s,int numberOfKeyboards, int numberOfUsb){
    int sum=0;
    int realSum=INT_MIN;
    int flag=0;
    for(int i=0;i<numberOfKeyboards;i++){
        for(int j=0;j<numberOfUsb;j++){
            if((keyboards[i]+drives[j])<=s){
                    flag=1;
                sum+=keyboards[i]+drives[j];
            }
            if(sum>realSum){
                realSum=sum;
            }
            sum=0;
        }
    }int haha=-1;
    if(flag==1)return realSum;
    else return haha;
}

int main() {
    int s;
    int n;
    int m;
    scanf("%d %d %d", &s, &n, &m);
    int *keyboards = malloc(sizeof(int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%d",&keyboards[keyboards_i]);
    }
    int *drives = malloc(sizeof(int) * m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       scanf("%d",&drives[drives_i]);
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s,n,m);
    printf("%d\n", moneySpent);
    return 0;
}
