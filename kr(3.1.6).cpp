#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool check(char* str){
    int k = 0;
    int m = strlen(str);

    for (int i=0; i<m-2; ++i){
        if (str[i]=='+'||str[i]=='-'){
            if(!(isdigit(str[i+1])&&i<m-3)){
                return false;
            }
        }
        else if(!isdigit(str[i])){
            return false;
        }
    }
    return(str[m-2]=='=');
}
int expr(char* str){
    int sum = 0;
    int m = strlen(str);
    int d=0;
    bool sign = true;
    char buf[20];
    int j=0;
    for (int i=0; i<m-1;++i){
        if (isdigit(str[i])){
            buf[j++] = str[i];
        }
        else if (str[i]=='+'||str[i]=='-'){
            buf[j]='\0';
            d = atoi(buf);
            if (sign) sum +=d;
            else sum -=d;

            j=0;
            sign = (str[i]=='+');
        }
    }
    buf [j] = '\0';
    d = atoi(buf);
    if(sign)sum+=d;
    else sum-=d;

    return sum;
}

int main (){
    char s[255];
    fgets(s,255,stdin);
    bool br = check(s);

    if (!br){
        printf("Incorrect Expression");
    }
    else{
        int sum = expr(s);
        printf("s=%d", sum);
    }
}
