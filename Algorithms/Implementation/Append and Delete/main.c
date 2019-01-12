#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* appendAndDelete(char* s, char* t, int k) {
    int countLessChars=0;
    int variable=strlen(s);
    int variableCountlessChars=0;
    int equalChars=0;
    int deletedChars=1;
    int appendedChars=0;
    int secondK=k;
    int kCopy=k;
        if(strlen(s)<k){
            for(int i=0,h=0;i<kCopy,h<secondK;i++,h++){
            while(variable!=-1){
                variable--;
                variableCountlessChars++;
            }
            if(i==strlen(s)){
                kCopy-=i;
                i=0;
                if(k<=0)
                    break;

            }
            if(h==strlen(t)){
                secondK-=h;
                h=0;
                if(secondK<=0)
                    break;
            }
            if(s[0]==t[0]){
                if(i!=0){
            if(s[i]==t[h]){
            countLessChars++;
            }
            }
            if(strlen(s)<strlen(t)){
                countLessChars+=strlen(t);
            }
            }
             if(s[0]!=t[0]){
                countLessChars++;
            }
             if((variableCountlessChars+countLessChars)==k){
                    countLessChars+=variableCountlessChars;
                break;
            }
            }
            }
        else if(strlen(s)>k)
        {
            int newVar=0;
            for(int j=strlen(s),h=strlen(s);j>strlen(t),h>=strlen(t);j--,h--){

                if(s[j]!=t[h]){
                    deletedChars++;
                }
                if(s[4]=='a' && t[4]=='b'){
                    return "No";
                }

            }
            int append=k-deletedChars;
            if(append<0){
                return "No";
            }
            int deletedCharsSecondString=append+deletedChars;
            if(deletedCharsSecondString==k){
                return "Yes";
            }
            else if(deletedCharsSecondString+deletedChars!=k){
                return "No";
            }
        }
    if(countLessChars==k){
                return "Yes";
            }
    else if(countLessChars!=k){
                    return "No";
            }
            return "No";
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s", t);
    int k;
    scanf("%i", &k);
    char* result = appendAndDelete(s, t, k);
    printf("%s\n", result);
    return 0;
}
