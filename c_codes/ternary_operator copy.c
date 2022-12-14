#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter first no");
    scanf("%d",&a);
    printf("enter second no");
    scanf("%d",&b);
    l=a>b?a:b;
    printf("largest=%d",l);
    return 0;
}