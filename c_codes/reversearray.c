#include<stdio.h>
int main()
{
    int i;
    int a[10];
    for(i=0;i<10;++i)
    {
        printf("ente ns");
        scanf("%d",&a[i]);

    }
printf("array is\n:");
    for(i=0;i<10;++i)
    {
        printf("%d ",a[i]);

    } 
    printf("\n");
printf("  reverse array is\n:");
    for(i=9;i>=0;--i)
    {
        printf("%d ",a[i]);

    }
    return 0;
}