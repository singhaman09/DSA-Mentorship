#include<stdio.h>
int main()
{
    int arr[5],i,range;
    int large , small;
    large=small=arr[0];
    for(i=0;i<5;++i)
    {
        printf("ente ns");
        scanf("%d",&arr[i]);

    }
    printf("array is\n:");
    for(i=0;i<5;++i)
    {
        printf("%d ",arr[i]);

    } 
    for(i=0;i<5;++i)
    {
        if(arr[i]>large)
        {
        large=arr[i];
        }
        else if(arr[i]<large)
        {   small=arr[i];
        }
    }
    range=large-small;
    printf("\nlarge%d",large);
    printf("\nsmall%d",small);
    printf("\nrange=%d",range);
    return 0;


}