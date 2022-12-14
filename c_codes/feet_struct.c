#include<stdio.h>
struct distance
{
int feet;
float inch;
};

int main()
{
    struct distance t1,t2,result;
    printf("enter distance:\n");
    printf("enter feet,inch:\n");
    scanf("%d%f",&t1.feet,&t1.inch);

    printf("enter distance:\n");
    printf("enter feet,inch:\n");
    scanf("%d%f",&t2.feet,&t2.inch);

    result.feet=t1.feet+t2.feet;
    result.inch = t1.inch + t2.inch;

    while(result.inch>=12.0)
    {
        result.inch=result.inch-12.0;
        ++result.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);


return 0;
}
