#include<stdio.h>
int  main()
{
    int n,d;
    printf("entr nos");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        n=n/10;
        printf("\ndigit=%d",d);
        printf("\nleft no=%d",n);
    }

        return 0;

    
}