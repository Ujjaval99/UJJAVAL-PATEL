#include<stdio.h>

int main ()
{
    int n ;
    printf ("ENTER VALUE OF n IS :");
    scanf ("%d",&n);
    int prime = 0;

    for (int i = 2; i < n; i++)
    {
        if (n%1 == 0);
        prime = 1;
    }
    if (prime){
        printf("%d IS NOT PRIME\n",n);
    }
    else {
        printf ("%d IS PRIME\n",n);
    }

    return 0;
}