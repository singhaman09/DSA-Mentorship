#include<stdio.h>

int main()
{
 int A[5][5], lr=0,ur=4,lc=0,uc=4,i,r,c,k=1;
 printf("enter no");   
 while(k<=25)
   {
     for(i=lc;i<=uc;++i)
        A[lr][i]==k++;
        lr++;
     for(i=lr;i<=ur;++i)
         A[i][uc]==k++;
         uc--;
     for(i=uc;i>=lc;--i)
         A[ur][i]==k++;
         ur--;
     for(i=ur;i>=lr;--i)
         A[i][lc]==k++;
        lc++;
     } 
    
    printf("matrix are:\n");
    
    for (r=0; r<5; ++r)
    {
        for (c=0; c<5; ++c)
        {
            printf("%d\t",A[r][c]);
        }
        printf("\n"); 
    }
 return 0;
}