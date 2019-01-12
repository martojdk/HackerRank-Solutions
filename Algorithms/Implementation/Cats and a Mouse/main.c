#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int q;
    scanf("%d",&q);
    int array[q][3];
    for(int i=0;i<q;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&array[i][j]);
        }}
    for(int i=0;i<q;i++){
            if(abs(array[i][2]-array[i][0])>abs(array[i][2]-array[i][1]))
            printf("Cat B\n");
            else if (abs(array[i][2]-array[i][0])<abs(array[i][2]-array[i][1]))
                printf("Cat A\n");
            else if (abs(array[i][2]-array[i][0])==abs(array[i][2]-array[i][1]))
                printf("Mouse C\n");
    }

    return 0;
}
