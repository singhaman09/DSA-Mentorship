#include<stdio.h>
int main()
{
    int i;
    int a[10];
    for(i=0;i<5;++i)
    {
        printf("ente ns");
        scanf("%d",&a[i]);

    }
printf("array is\n:");
    for(i=0;i<5;++i)
    {
        printf("%d ",a[i]);

    } 
    return 0;
}