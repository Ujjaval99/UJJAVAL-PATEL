#include<stdio.h>

void change (int*);

void change (int*a){
    *a = *a*10;
}

int main ()
{
    int x = 10;
    printf("THE VALUE OF x IS %d\n",x);

    change(&x);
    printf("THE VALUE OF x IS %d\n",x);
    
    return 0;
}
