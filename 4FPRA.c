#include<stdio.h>

int f(int);

int f(int n){
    if (n == 1 || n ==2){
        return n-1;

    }
    return f(n-1) + f(n-2);
}
int main (){

int n = 4;
printf("THE VALUED OF F IS %d IS %d",n,f(n));

    return 0 ;
}