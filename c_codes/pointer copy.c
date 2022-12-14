#include<stdio.h>
int main()
{
    int a,*b;
    a=3;
    b=&a;
    printf("value of a=%d",a);
    printf("\naddress of a=%p",&a);
    printf("\nvalue of b=%p",b);
    printf("\nresult value of b=%d",*b);
    return 0;
}