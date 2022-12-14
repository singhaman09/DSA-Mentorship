#include<stdio.h>

struct point
{
int x,y; 
};
int main()
{
struct point T;
struct point *S;
printf("enter value in x and y");
scanf("%d %d",&T.x,&T.y);
S=&T;
printf("value of pointer =%d %d", S->x ,S->y);

return 0;
}