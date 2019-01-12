#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long taumBday(long long blacks, long long whites, long long blackcost, long long whitecost, long long convertcost) {
    long long sumOfBlacks=blacks*blackcost;
    long long sumOfWhites=whites*whitecost;
    long long sumOfConvertedBlacks=blacks*(whitecost+convertcost);
    long long sumOfConvertedWhites=whites*(blackcost+convertcost);
    long long moneySpent;
    if(sumOfBlacks>=sumOfConvertedBlacks)
       sumOfBlacks=sumOfConvertedBlacks;
    else 
    if(sumOfWhites>sumOfConvertedWhites)
        sumOfWhites=sumOfConvertedWhites;
    moneySpent=sumOfWhites+sumOfBlacks;
    return moneySpent;

}

int main() {
    long long t;
    scanf("%lld", &t);
    for(long long a0 = 0; a0 < t; a0++){
        long long b;
        long long w;
        scanf("%lld %lld", &b, &w);
        long long x;
        long long y;
        long long z;
        scanf("%lld %lld %lld", &x, &y, &z);
        long long result = taumBday(b, w, x, y, z);
        printf("%lld\n", result);
    }
    return 0;
}
