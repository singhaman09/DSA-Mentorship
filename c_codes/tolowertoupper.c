#include<stdio.h>
int main()
{
    char c;
    printf("entr a char:");
    scanf("%c",&c);
    if(isupper(c))
    printf("%c in lowercase is represented as %c", c, toupper(c));
    else
    printf(" is lower case so cnvrtd to upper case , %c", toupper(c), c);

    return 0;

     
    
}