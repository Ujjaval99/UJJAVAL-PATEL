#include<stdio.h>

int*sum(int a, int b){
    int s = a+b;
    int*ptr = &s;
    printf("THE SUM IS %d\n",s);
    return ptr;
    }

    float* avrage(int a,int b){
        float avg = (a+b)/2.0;
        float*ptr = &avg;
        printf("THE AVRAGE IS %f\n",avg);
        return ptr;
    }

int main ()
{
    int x = 5;
    int y = 6;
    int*ptr1;
    float*ptr2;

    ptr1 = sum(x,y);
    ptr2 = avrage(x,y);

    printf("THE ADDRES OF SUM IS %u AND OF AVRAGE IS %u",ptr1,ptr2);
    return 0;
}
