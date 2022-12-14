#include<stdio.h>
int main()
{
    char c;
    FILE *f;
    f=fopen("story.txt","r");
    if(!f)
    printf("file not found");
    else
    {
        while (1)
        {   c=fgetc(f);
            if(c==EOF)
            break;
            else
            printf("%c",c);
        }
    }
fclose(f);
return 0;
}
