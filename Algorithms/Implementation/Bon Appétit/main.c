#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   int itemsOrdered;
   scanf("%d",&itemsOrdered);
   int foodThatTheBitchDidntEat;
   scanf("%d",&foodThatTheBitchDidntEat);
   int*prices=(int*)malloc(itemsOrdered*sizeof(int));
   int bryansCharge;
   int sum=0;
   for(int i=0;i<itemsOrdered;i++){
    scanf("%d",&prices[i]);
    sum+=prices[i];
   }
   sum-=prices[foodThatTheBitchDidntEat];
   sum/=2;
   scanf("%d",&bryansCharge);
    if(sum==bryansCharge)
        printf("Bon Appetit\n");
    else
    printf("%d",bryansCharge-sum);

    return 0;
}
