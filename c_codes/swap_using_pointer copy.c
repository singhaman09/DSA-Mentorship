#include<stdio.h>
int main()
{
    int a,b,*c,*d;
    scanf("%d",&a);
    scanf("%d",&b);
    c=&a;
    d=&b;
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    printf("nos are swapped: \n%d \n%d",a,b);
    return 0;
}