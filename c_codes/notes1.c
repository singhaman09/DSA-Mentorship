#include<stdio.h>
int main()
{
    int amt,n1=0,n5=0,n10=0,n20=0,n50=0,n100=0,n500=0,n2000=0;
    printf("enter amount:\n");
    scanf("%d",&amt);
    if(amt>=2000)
    {
        n2000=amt/2000;
        amt=amt-(2000*n2000);
    }
    if(amt>=500)
    {
        n500=amt/500;
        amt=amt-(500*n500);
    }
    if(amt>=100)
    {
        n100=amt/100;
        amt=amt-(100*n100);
    }
    if(amt>=50)
    {
        n50=amt/50;
        amt=amt-(50*n50);
    }
    if(amt>=20)
    {
        n20=amt/20;
        amt=amt-(20*n20);
    }
    if(amt>=10)
    {
        n10=amt/10;
        amt=amt-(10*n10);
    }
    if(amt>=5)
    {
        n5=amt/5;
        amt=amt-(5*n5);
    }
    if(amt>=1)
    {
        n1=amt/1;
        amt=amt-(1*n1);
    }
    printf("notes of 2000:%d",n2000);
    printf("\nnotes of 500:%d",n500);
    printf("\nnotes of 100:%d",n100);
    printf("\nnotes of 50:%d",n50);
    printf("\nnotes of 20:%d",n20);
    printf("\nnotes of 10:%d",n10);
    printf("\nnotes of 5:%d",n5);
    printf("\nnotes of 1:%d",n1);

    return 0;
}