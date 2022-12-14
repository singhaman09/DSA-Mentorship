//with argument with return
#include<stdio.h>
float SI( float P, float R , float T)
{
    float I;
    I=P*R*T/100;
    return I;

}
int main()
{
    float P,R,T,I;
    printf("enter");
    scanf("%f %f %f",&P,&R,&T);
    I=SI(P,R,T);
    printf("SI=%.2f",I);
    return 0;
}
