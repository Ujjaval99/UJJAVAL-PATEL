#include<stdio.h>

int main ()
{
    int n;
    printf("ENTER THE VALUE OF n ");
    scanf("%d",&n);

    int arr [10];

    for (int i = 1; i<=10; i++){
        arr[i] = n * i;
    }

    for (int i = 1 ; i <=10; i++)
    {
        printf("%d X %d = %d\n",n,i,arr[i]);
    }
    

    return 0;
}
