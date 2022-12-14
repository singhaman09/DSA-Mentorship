#include <stdio.h>
int main() 
{
   int i, n;
// initialize first and second terms
  int a = 0, b = 1;
// initialize the next term (3rd term)
  int c = a + b;
// get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);
// print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d", a, b);
 // print 3rd to nth terms
  for (i = 3; i <= n; ++i) 
  {
    printf(", %d", c);
    a=b;
    b=c;
    c=a+b;
  }

  return 0;
}