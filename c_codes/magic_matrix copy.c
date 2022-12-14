#include<stdio.h>
int main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j,a0=0,a3=0,a1=0,a2=0;
    printf("original matrix is:\n");
    for(i=0;i<4;++i)
    {  for(j=0;j<4;++j) 
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    a0=a[0][0];
    a[0][0]=a[3][3];
    a[3][3]=a0;

    a1=a[1][1];
    a[1][1]=a[2][2];
    a[2][2]=a1;
    
    a2=a[0][3];
    a[0][3]=a[3][0];
    a[3][0]=a2;

    a3=a[1][2];
    a[1][2]=a[2][1];
    a[2][1]=a3;
    printf("\n");
    printf("magic matrix is:\n");
    for(i=0;i<4;++i)
    {  for(j=0;j<4;++j) 
    {   
         printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
   return 0;
}