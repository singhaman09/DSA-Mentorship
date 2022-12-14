#include<stdio.h>
int main()
{
    char c;
    int u=0 , l=0 ,s=0 ,a=0 , line=0 ,vowel=0,conso=0;
    FILE *f;
    f=fopen("story.txt","r");
    if(!f)
    printf("file not found");
    else
    {
        while (1)
        {
            c=fgetc(f);
            if (c==EOF)
            break;
            else
            {   if (c == '\n') // Increment count if this character is newline
                    line = line + 1;
               
                else if(c>='A' && c<='Z')
                    u+=1;
                else if(c>='a' && c<='z')
                    l+=1;
                else if(isspace(c))
                    s+=1;
                else
                    a+=1;

                
                    if(c=='a'|| c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
                    vowel++;
                    else
                    conso++;                             

            }
        }
    }
    printf("total upper case %d",u);
    printf("\ntotal lower case %d",l);
    printf("\ntotal alphabet in this file is: %d",u+l);
    printf("\ntotal spaces in file is: %d",s);
    printf("\nspecial character:%d",a);
    printf("\ntotal lines are:%d",line+1);
    printf("\ntotal vowels are: %d",vowel);
    printf("\ntotal consonant %d",conso-s-a);
    
    fclose(f);
    return 0;
}
