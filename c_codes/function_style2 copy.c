// no argument with return
#include<stdio.h>
float SI()
{
    float P,R,T,I;
    printf("enter");
    scanf("%f %f %f",&P,&R,&T);
    I=P*R*T/100;
    return I;
}
int main()
{
    float I;
    I=SI();
    printf("SI=%.2f",I);
    return 0;
}
