#include<stdio.h>
int main()
{
    int n[10];
    int i, a=10,v1=0,v=0;
    printf("enter ISBN number:\n");
    for(i=0;i<10;++i)
    {
        scanf("%d",&n[i]);
    }

    for(i=0;i<10;++i)
    {
        printf("%d\t",n[i]);
    }

    printf("\n");

    for(i=0;i<10;++i)
    {
        v=n[i]*a;
        v1=v1+v;
        a=a-1;
        printf("v=%d\t",v);
    }

    printf("\nv1=%d",v1);

    if(v1%11==0)
    {
        printf("\nentered number  is an ISBN number.");
    }
    else
    {
        printf("\nentered number  is not an ISBN number.");
    }

    return 0;
}