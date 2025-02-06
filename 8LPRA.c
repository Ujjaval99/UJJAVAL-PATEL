#include<stdio.h>

int main ()

{
 float n ;
 printf ("ENTER THE VALUE OF n");
 scanf("%f",&n);

 for (int i = 1; i<=10; i++){

    printf("%f X %d = %f\n",n,i,n*i);
 }

    return 0 ;
}