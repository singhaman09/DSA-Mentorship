#include<stdio.h>
#include<math.h>
int main()
{   
    int n,v=0,j;
    int a[3], i;
    
    for(i=0;i<=2;i++)
    {
    scanf("%d",&a[i]);
    }
    for(j=0;j<=8;j++)
    {
        for(i=0;i<=2;i++)
        {   
            printf("%d\t",a[i]);
        }
        
    }
    i+=1;

return 0;
}