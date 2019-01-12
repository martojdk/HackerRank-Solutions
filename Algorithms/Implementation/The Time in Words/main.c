#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeInWords(int hours, int minutes) {
   char minutesWords[30][20] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven",
                    "twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen",
                    "nineteen","twenty","twenty one","twenty two","twenty three","twenty four",
                    "twenty five","twenty six","twenty seven","twenty eight","twenty nine","half past"};
    char *result = (char*)malloc(500);
    if(minutes<=30)
    {
        if(minutes == 0 )
        {
            if(hours==15)
            {
            sprintf(result,"fifteen o' clock");
            }
            else
            {
            sprintf(result,"%s o' clock",minutesWords[hours-1]);
            }
        }
        if(minutes-1==0)
        {
            sprintf(result,"%s minute past %s",minutesWords[minutes - 1],minutesWords[hours-1]);
        }
        if(minutes-1>0)
        {
            sprintf(result,"%s minutes past %s",minutesWords[minutes - 1],minutesWords[hours-1]);
        }
        if(minutes==30)
        {
            sprintf(result,"half past %s",minutesWords[hours-1]);
        }
        if(minutes==15)
        {
            sprintf(result,"quarter past %s",minutesWords[hours-1]);
        }
    }
    if(minutes > 30)
    {
        if(minutes==59)
        {
        sprintf(result,"one minute to %s",minutesWords[hours]);
        }
        if(minutes == 45)
        {
            sprintf(result, "quarter to %s",minutesWords[hours]);
        }
        if(minutes!= 59 && minutes !=45)
        {
            sprintf(result,"%s minutes to %s",minutesWords[60- minutes-1],minutesWords[hours]);
        }
    }
    return result;
}

int main() {
    int h;
    scanf("%i", &h);
    int m;
    scanf("%i", &m);
    char* result = timeInWords(h, m);
    printf("%s\n", result);
    free(result);
    return 0;
}
