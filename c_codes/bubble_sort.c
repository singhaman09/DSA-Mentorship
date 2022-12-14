#include<stdio.h>
int main()
{
    int a[5],i,j,temp=0;
    printf("enter arrray elements:\n");
    for(i=0;i<5;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("before sort:\n");
    for(i=0;i<5;++i)
    {
        printf("%d\t",a[i]);
    }

    for(j=0;j<4;++j)
    {
        for(i=0;i<4-j;++i)
        {   
            if(a[i]>a[i+1])
            {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
            }
            
        }
    }
    printf("\n");
    printf("after sort\n");
    for(i=0;i<5;++i)
    {  
        printf("%d\t",a[i]);
    }
    return 0;
}