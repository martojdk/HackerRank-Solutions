#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int beautifulDays(int i, int j, int k) {
    int result=0;
    int remainder,reverse=0;
  for(int days=i;days<=j;days++){
    int num=days;
    remainder=0;
    reverse=0;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if(abs((days-reverse)%k==0)){
        result++;
    }

  }
  return result;
}

int main() {
    int i;
    int j;
    int k;
    scanf("%i %i %i", &i, &j, &k);
    int result = beautifulDays(i, j, k);
    printf("%d\n", result);
    return 0;
}
