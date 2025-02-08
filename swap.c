#include<stdio.h>

void swap(int*,int*);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;

}
int main () {

int a = 4,b = 6;
swap(&a,&b);
printf("THE VALUE OF A IS %d AND B IS %d",a,b);


    return 0;
}
