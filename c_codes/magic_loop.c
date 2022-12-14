#include<stdio.h>
int main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j,a0=0,a3=0,a1=0,a2=0,b0=0,b1=0,b2=0,b3=0;
    for(i=0;i<4;++i)
    {  for(j=0;j<4;++j) 
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<4;++i)
    {  for(j=0;j<4;++j) 
    {   if(i==0 && j==0)
        {
            a0=a[i][j];
        }
        else if(i==1 && j==1)
        {
            a1=a[i][j];
        }
        else if(i==2 && j==2)
        {
            a2=a[i][j];
        }
        else if(i==3 && j==3)
        {
            a3=a[i][j];
        }
        else if(i==0 && j==3)
        {
            b0=a[i][j];
        }
        else if(i==1 && j==2)
        {
            b1=a[i][j];
        }
        else if(i==2 && j==1)
        {
            b2=a[i][j];
        }
        else if(i==3 && j==0)
        {
            b3=a[i][j];
        }
    }
    }
    for(i=0;i<4;++i)
    {  for(j=0;j<4;++j) 
    {   if(i==0 && j==0)
        {
            a[i][j]=a3;
        }
        else if(i==1 && j==1)
        {
            a[i][j]=a2;
        }
        else if(i==2 && j==2)
        {
            a[i][j]=a1;
        }
        else if(i==3 && j==3)
        {
            a[i][j]=a0;
        }
        else if(i==0 && j==3)
        {
            a[i][j]=b3;
        }
        else if(i==1 && j==2)
        {
            a[i][j]=b2;
        }
        else if(i==2 && j==1)
        {
            a[i][j]=b1;
        }
        else if(i==3 && j==0)
        {
            a[i][j]=b0;
        }
    }
    }
    printf("\n");
    for(i=0;i<4;++i)
    {  for(j=0;j<4;++j) 
    {   
         printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
   return 0;
}