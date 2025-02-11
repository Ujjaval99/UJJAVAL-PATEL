#include<stdio.h>
#include<string.h>

int stelen(char str []){
    int i = 0,count;
    char c  = str[i];
    while(c!='\0'){
        c = str[i];
        i++;
    }
    count = i-1;
    return count;
}
int main ()
{
char str [] = "Bunty Bhai";

printf("%d",strlen(str));



    return 0;
}
