#include<stdio.h>
int main()
{  int n;
    printf("enter no\n");
    scanf("%d",&n);

    if (n>0)
    printf("no is positive\n");
    else if (n<0)
    printf("no is negative\n");
    else
    printf("no is zero\n");

    return 0;


}