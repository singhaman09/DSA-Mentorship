#include<stdio.h>
#include<stdlib.h>
int magic(int n)
{   int s=0,d;
while(n>9)
{   s=0;
    while(n>0)
    {
    d=n%10;
    n=n/10;
    s=s+d;
    }
    n=s;  
}
return s; 
}

int happy(int a)
{   int s1=0,d1;
while(a>9)
{   s1=0;
    while(a>0)
    {
    d1=a%10;
    a=a/10;
    s1=s1+d1*d1;
    }
    a=s1;  
}
return s1; 

}
int main()
{
    int n,s1,s3,a;
    printf("enter n for checking whether it is magic number or not:");
    scanf("%d",&n);
    printf("enter a for checking whether it is happy number or not:");
    scanf("%d",&a);
    s1=magic(n);
    if(s1==1)
    {
    printf("\nentered number is a magic number.");
    }
    else
    {
    printf("\nentered number is not a magic number.");
    }
    s3=happy(a);
    if(s3==1)
    {
        printf("\nentered number is a happy number.");
    }
    else
    {
         printf("\nentered number is not a happy number.");
    }
    return 0;
}