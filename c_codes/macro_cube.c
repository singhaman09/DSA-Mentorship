#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define cube(x) x*x*x
int main()
{
    int a;
    printf("enter no\n");
    scanf("%d",&a);
    printf("result=%d",cube(a));
    getch();
    return 0;
} 