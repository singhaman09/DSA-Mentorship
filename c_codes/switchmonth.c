#include<stdio.h>
int main()
{
    int d;
    printf("enter month no 1-12");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
        printf("jan");
        break;
    case 2:
        printf("feb");
        break;

    case 3:
        printf("march");
        break;
    case 4:
        printf("april");
        break;
    case 5:
        printf("may");
        break;
    case 6:
        printf("jun");
        break;
    case 7:
        printf ("july");
        break;
    case 8:
        printf ("aug");
        break;
    case 9:
        printf ("sep");
        break;
    case 10:
        printf ("oct");
        break;
    case 11:
        printf ("nov");
        break;
    case 12:
        printf ("dec");
        break;
    default :
        printf("wrong choice");
        
        }

        return 0;

}