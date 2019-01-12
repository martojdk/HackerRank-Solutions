#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int libraryFine(int day1, int month1, int year1, int day2, int month2, int year2) {
    int result;
    if(year1==year2){
    if(month1==month2){
        if(day1<=day2){
            result=0;
        }
        if(day1>day2){
            result=abs((day1-day2)*15);
        }
    }
    if(month1>month2){
        result=abs((month1-month2)*500);
    }
    if(month2>month1){
        result=0;
    }
    }
    else if (year2>year1)
    {
        result=0;
    }
    else {
        result=10000;
    }
    return result;
}

int main() {
    int d1;
    int m1;
    int y1;
    scanf("%i %i %i", &d1, &m1, &y1);
    int d2;
    int m2;
    int y2;
    scanf("%i %i %i", &d2, &m2, &y2);
    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    printf("%d\n", result);
    return 0;
}
