//sum of time using function.
#include<stdio.h>

struct time
{
int h,m,s;
} t1, t2, result;

void time()
{
printf("enter time:\n");
printf("enter hour,min,sec:\n");
scanf("%d%d%d",&t1.h,&t1.m,&t1.s);

printf("enter time again:\n");
printf("enter hour,min,sec:\n");
scanf("%d%d%d",&t2.h,&t2.m,&t2.s);

result.h=t1.h+t2.h;
result.m=t1.m+t2.m;
result.s=t1.s+t2.s;

while(result.s>60)
{
result.s=result.s-60;
++result.m;
}

while(result.m>60)
{
result.m=result.m-60;
++result.h;
}

printf("sum of time is:%d hrs %d min %d sec ",result.h, result.m, result.s);
}
int main()
{ int i,n; 
printf("enter no of time you want to run prog");
scanf("%d",&n);
  for(i=1;i<=n;++i)
      time();
return 0;
}