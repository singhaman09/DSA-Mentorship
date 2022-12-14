#include<stdio.h>
int main()
{
    int i,s1=0,s2=0;
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
    for(i=0;i<10;++i)
    { 
         if(a[i]%2==0)
           s1=s1+a[i];
         else
           s2=s2+a[i];
    }
printf("sum of even elements are=%d\n",s1);
printf("sum of odd elements are=%d",s2);
return 0;
}