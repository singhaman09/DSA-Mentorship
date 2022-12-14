#include<stdio.h>
int main()
{
    int x,y,z,i;
    scanf("%d %d %d",&x,&y,&z);
    i=x>y?(x>z):(y>z)?x:z;
    printf("%d",i);
    return 0;
}