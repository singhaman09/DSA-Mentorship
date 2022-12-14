#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,r1,r2,D;
    printf("enter coefficient of x^2:");
    scanf("%d",&a);
    printf("enter coefficient of x:");
    scanf("%d",&b);
    printf("enter constant:");
    scanf("%d",&c);
    D=(b*b)-(4*a*c);
    if(D<0)
    {
        printf("\nno real roots.");
    }
    else
    {
        r1=(-b+ (sqrt(D)))/(2*a);
        r2=(-b-(sqrt(D)))/(2*a);
        printf("\nfirst root is=%d",r1);
        printf("\nsecond root is=%d",r2);
    }    
    return 0;
}