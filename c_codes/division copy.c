#include<stdio.h>
float main()
{  float n;
    printf("enter no\n");
    scanf("%f",&n);

    if (n>=400)
    printf("first division\n");
    if (n>=300 &&n<400)
    printf("second division\n");
    if(n<200)
    printf("third division\n");

    return 0;


}