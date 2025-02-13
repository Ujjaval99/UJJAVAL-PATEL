#include<stdio.h>

typedef struct vector
{
    int i;
    int j;
}v;

v sumvector(v v1,v v2){
    v v3 = {v1.i +v2.i,v1.j+v2.j};
    return v3;
}
int main ()
{
    v v1 = {3,2};
    v v2 = {8,3};
    v v3 = sumvector(v1,v2);

    printf("THE VACTOR IS %di + %dj\n",v3.i,v3.j);
    
    return 0;
}


