//wap to input a decimal number 
//and print it's binary value .
#include<stdio.h>

int main()
{
    int n, d;
    int s=0, k=1; 
    
    printf("Enter a Number:");
    scanf("%d", &n);
   
    while(n>0)
    {
     d=n%2;
     n=n/2;
     s=s+d*k;
     k=k*10;
    }
     printf("\nBinay No=%d", s);
   
    return 0;
}