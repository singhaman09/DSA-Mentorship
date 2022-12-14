#include<stdio.h>
int main()
{
int i = 10;

int *p;

p = &i;

printf("value of i = %d", *p); // 10

printf("\nvalue of p = %u", p); //6554

*p=*p+10; //i=i+10

printf("\n%d",i); //20
return 0;
}
