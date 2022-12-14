#include<stdio.h>
int main()  
{  
    int num = 1, count,n;
    printf("enter"); 
    scanf("%d",&n); 
    float sum = 0.0, fact;  
  
    while(num <= n)  
    {  
        fact = 1;  
        for(count = 1; count <= num; count++)  
        {  
            fact = fact * count;  
        }  
  
        sum = sum + (num / fact);  
  
        num++;  
    }  
  
    printf("Sum of series is %f\n", sum);  
  
    return 0;  
}