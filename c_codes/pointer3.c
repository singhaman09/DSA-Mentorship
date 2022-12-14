#include<stdio.h>
int main()
{
int x[]={10,7,15,22,40,50};
int i;
int *a=&x[0];
printf("\n%d",*a);
*a*=3;
printf("\n%d",*a);
a+=3;
printf("\n%d",*a);
a-=1;
printf("\n%d",*a);
*a-=1;
printf("\n%d",*a);
++a;
printf("\n%d",*a);
a++;
printf("\n%d",*a);
++*a;
printf("\n%d",*a);
*a++;
printf("\n%d",*a);

char c[]="computer";
char *d=&c[0];
while (*d)

{
    printf("\n %c",*d++);
}
return 0;
}