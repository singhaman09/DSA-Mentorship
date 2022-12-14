#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main() 
{
   int i, n;
   char c;
// initialize first and second terms
  char a = a, b = b;
// initialize the next term (3rd term)
  
// get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);
// print the first two terms t1 and t2
  printf("Fibonacci Series: %c, %c", a, b);
 // print 3rd to nth terms
  for (i = 3; i <= n; ++i) 
  {
    printf(", %s",strcat(a,b));
    a=b;
    b=c;
    c=strcat(a,b);
  }

  return 0;
}