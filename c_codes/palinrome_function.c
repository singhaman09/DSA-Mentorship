#include<stdio.h>
int palindrome(int n)
{
    int num,j,s;
    num=n;
    s=0;
    while(num>0)
    {
        j=num%10;
        s=s*10+j;
        num/=10;
    }
    if(s==n)
        return 1;
    else
        return 0;

}
int main()
{
    for(int i=100;i<=10000;i++)
    {
        if(palindrome(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}