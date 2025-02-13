#include<stdio.h>

struct bankacc
{
    int accountnumber;
    char name [50];
    char ifsc [12];
    float amount;
};

int main ()
{
    struct bankacc arr[100];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %s %s %f",&arr[i].accountnumber,&arr[i].name,&arr[i].ifsc,&arr[i].amount);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("ACCOUNT NUMBER IS %d\n ACCOUNT HOLDER NAME %s\n ACCOUNT IFSC NUMBER %s\n AMOUNT %f\n",arr[i].accountnumber,arr[i].name,arr[i].ifsc,arr[i].amount);
        
    }
    
    
    return 0;
}
