#include<stdio.h>
int main()
{
    int i,n,r,p ;
    double f=1, fr=1;
    printf("entr value of n and r");
    scanf("%d %d ", &n,&r);
    p=n-r;
    for(i=1;i<=n;i=i+1)
    f=f*i;
    for(i=1;i<=p;i=i+1)
    fr=fr*i;
    printf("factorial of n =%lf",f);
    printf("\nfactorial of n-r= %lf",fr);
    printf("\n n!/(n-r)!=%lf",f/fr);

    return 0;
}