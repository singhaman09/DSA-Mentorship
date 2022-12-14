#include<stdio.h>
#include<stdlib.h>
int SOD(int n)
{   int s=0,d;
    while(n>0)
    {
    d=n%10;
    n=n/10;
    s=s+d;
    }
return s;
}

int SOP(int n)
{
    int count,s2=0,d1;
    printf("\nprime factors are:\n");
    for(count=2;count>1;++count)
    {
        while(n%count==0)
        {   printf("%d\t",count);
            n=n/count;
            if(count>10)
            {
                s2=s2+SOD(count);   
            }
            else
            {
                s2=s2+count;                
            }    
        }
    }
return s2;
}

int check(int s1 ,int s3,int n)
{
    if(s1==s3)
    {
        printf("\ngiven number is smith number");
    }
    else
    {
        printf("\ngiven number is not a smith number");
    }
}
int main()
{
    int n,s1,s3;
    printf("enter n:");
    scanf("%d",&n);

    s1=SOD(n);
    printf("sum of digits is=%d",s1);

    s3=SOP(n);
    printf("\nsum of prime factor is=%d",s3);

    check(s1,s3,n);

    return 0;
}