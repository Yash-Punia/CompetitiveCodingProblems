#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter any number -> ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i>0&&i<n-1)
            printf("*");
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1)
                printf("*");
            else
                printf(" ");
        }
        if(i>0&&i<n-1)
            printf("*");
        printf("\n");
    }
    return 0;
}
