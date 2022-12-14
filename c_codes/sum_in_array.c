#include<stdio.h>
int main()
{
    int i,s=0;
    int a[10];

    for(i=0;i<=9;++i);
    {
        printf("entr no");
        scanf("%d",&a[i]);
    }
printf("no are:\n");

    for(i=0;i<=9;++i);
    {   s=s+a[i];
        printf("%d ", a[i]);
        
    }
printf("sum are=%d",s);

    return 0;
}