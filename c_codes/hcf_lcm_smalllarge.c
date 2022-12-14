#include<stdio.h>
int main()
{
    int a,b,lv,i,hcf,lcm;
    printf("enter first no");
    scanf("%d",&a);
    printf("enter second no");
    scanf("%d",&b);
    lv=a<b?a:b;
    printf("\nsmallest is=%d",lv);
    for(i=1;i<=lv;++i)
    {
        if((a%i==0) && (b%i==0))
        {
            hcf=i;
        }
    }
    printf("\nhcf=%d",hcf);

    lcm=(a*b)/hcf;
    printf("\nlcm=%d",lcm);
    return 0;
}