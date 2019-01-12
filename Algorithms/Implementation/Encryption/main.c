#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* encryption(char* s) {

    int stringlenght=sqrt(strlen(s));
    int lenght=strlen(s);
    int rows,cols;
    if(pow(stringlenght,2)==strlen(s)){
        rows=(int)stringlenght;
        cols=rows;
    }
    else{
        rows=(int)stringlenght;
        cols=rows+1;
        while((rows*cols)<strlen(s)){
            if(cols>rows)
                rows++;
            else
                cols++;
        }
    }
    char result[rows][cols];
    int count=0;
    int h=0;
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        if(count==rows*cols){
        break;
        }
        if(count>strlen(s)){
            result[i][j]='\0';
            count++;
            continue;
        }
        result[i][j]=s[h];
        h++;
        count++;
      }
    }
    char *fun=(char*)calloc(1500,sizeof(char));
    h=0;
    int flag=0;
    count =0;
    if(cols!=rows){
    for(int i=0;i<cols;i++){

        for(int j=0;j<cols;j++){
            if(j==cols-1 || result[j][i]=='\0'){
                fun[h]= ' ';
                h++;
                break;
            }
            fun[h]=result[j][i];
            h++;
            if(result[i][j]=='\0')
                continue;
            if(h==strlen(s)+rows-1){
                break;

            }
        }

        if(flag){
            break;
        }
    }
    }
    if(cols==rows){
            for(int i=0;i<cols;i++){

        for(int j=0;j<=cols;j++){
            if(j==cols || result[j][i]=='\0'){
                fun[h]= ' ';
                h++;
                break;
            }
            fun[h]=result[j][i];
            h++;
            if(result[i][j]=='\0')
                continue;
            if(h==strlen(s)+rows-1){
                break;

            }
        }

        if(flag){
            break;
        }
    }

    }
    return fun;
}

int main() {
    char* h = (char *)malloc(1500 * sizeof(char));
    char* s = (char *)malloc(1500 * sizeof(char));
    if(!h || !s){
        exit(-2);
    }
    fgets(h,1500,stdin);
    for(int i=0;i<strlen(h);i++){
        if(h[i]==' ')
            continue;
        s[i]=h[i];
    }
    s[strlen(h)]='\0';
    char* result = encryption(s);
    printf("%s\n", result);
    return 0;
}
