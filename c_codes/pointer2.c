#include<stdio.h>
int main()
{
int a[5]={10,18,6,3,9};
int *b=&a;
printf("%d",*b);
++b;
printf("\n%d",*b);
b=b+3;
printf("\n%d",*b);
--b;
printf("\n%d",*b);
return 0;
}