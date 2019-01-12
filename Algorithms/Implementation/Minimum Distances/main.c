#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int minimumDistances(int array_size, int* array)
{
    int firstDistance = 0;
    int flag = 0;
    int minimumDistance = INT_MAX;
    for (int i =0 ; i <array_size;i++)
    {
        for(int j = i+1;j<array_size;j++)
        {
            if(array[i]==array[j])
            {
                firstDistance = abs(i-j);
                if(minimumDistance>firstDistance)
                {
                    flag = 1 ;
                    minimumDistance = firstDistance;
                }
            }
        }
    }
    if(flag==1)
    {
        return minimumDistance;
    }
    else
        return -1;
}

int main() {
    int n;
    scanf("%i", &n);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int result = minimumDistances(n, a);
    printf("%d\n", result);
    return 0;
}
