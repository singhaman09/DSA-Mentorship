#include<stdio.h>
int main()
{
    int i,n,x[5];
    printf("enternos");
    scanf("%d",&n);
    for ( i = 0; i < 5; ++i)
    x[i]=n*(i+1);
    printf("first five multiple are\n");
    for ( i = 0; i < 5; ++i)
    printf("%d\t",x[i]);

    return 0;
    
}