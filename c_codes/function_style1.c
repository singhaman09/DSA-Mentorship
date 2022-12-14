//no argument no return
#include<stdio.h>
void SI()
{
    float P,R,T,I;
    printf("enter ");
    scanf("%f %f %f",&P,&R,&T);
    I=P*R*T/100;
    printf("simple intrest is= %.2f",I);

}
int main()
{
    SI();
    return 0;

}