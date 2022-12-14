#include<stdio.h>
int  main()
{
    int n,d;
    int s=0;
    printf("entr nos");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        n=n/10;
        s=s+d;
        printf("\nsum of digit=%d",s);
    }

        return 0;

    
}