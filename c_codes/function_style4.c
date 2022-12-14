//with argument no return
#include<stdio.h>
float SI(float P, float R, float T)
{   float I;
    I=P*R*T/100;
    printf("SI=%.2f",I);
}
int main()
{
    float P,R,T;
    printf("enter");
    scanf("%f %f %f",&P,&R,&T);
    SI(P,R,T);
    return 0;
}

