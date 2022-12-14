#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s0=0,sp=0,sn=0;
    char c;
    while(1)
    {
        printf("do you want to enter more no y-yes and n-no");
        scanf("%s",&c);
        if(c=='y')
        {
            scanf("%d",&n);
        }
        else if(c=='n')
        {
           break;
        }
        else
        {
            printf("\ninvalid input");
        }
    
    if(n==0)
    {
        s0=s0+1;
    }
    if(n<0)
    {
        sn=sn+1;
    }
    if(n>0)
    {
        sp=sp+1;
    }
    }
    printf("\nzeroes are:%d",s0);
    printf("\nnegative numbers are:%d",sn);
    printf("\npositive numbers are:%d",sp);

    return 0;

}