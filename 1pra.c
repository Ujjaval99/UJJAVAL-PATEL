#include<stdio.h>

int main ()

{
    int marks1 , marks2, marks3;
    printf ("ENTER MARKS1:\n");
    scanf ("%d",&marks1);

    printf ("ENTER MARKS2:\n");
     scanf ("%d",&marks2);

    printf ("ENTER MARKS3:\n");
     scanf ("%d",&marks3);


    printf ("THE marks are %d %d and %d\n",marks1,marks2,marks3);

    if (marks1<33 || marks2<33 || marks3<33){
        printf ("YOU ARE FAIL");

    } 
    else if ((marks1+marks2+marks3)/3 <40){
        printf ("YOU ARE FAIL");
    }
    else{
        printf ("YOU ARE PASS THIS EXAM");
    }
    return 0 ;
    

}