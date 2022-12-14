#include<stdio.h>
int main()
{
    int i,s=0;
    int a[10];
    for(i=0;i<10;++i)
    {
        printf("ente ns");
        scanf("%d",&a[i]);

    }
printf("array is\n:");
    for(i=0;i<10;++i)
    {   s=s+a[i];
        printf("%d ",a[i]);

    }
printf("\n");
printf("SUM OF THE ARRAY:=%d\n",s); 
    return 0;
}