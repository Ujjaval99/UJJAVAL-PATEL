#include <stdio.h>

int main ()
{
    int year;
    printf ("ENTER THE YEAR:");
    scanf ("%d",&year);

    if ((year %4==0 && year %100!=0) || year %400==0){
        printf ("THIS IS LIP YEAR");
    }
    else{
        printf("THIS IS NOT  A LIP YAER");
    }

    return 0 ;
}