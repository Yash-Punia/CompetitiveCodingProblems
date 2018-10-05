#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j;
    printf("Enter any number - ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i==1||i==x)
                printf("*");
            else
                if(j==1||j==x)
                    printf("*");
                else
                    printf(" ");
        }
        printf("\n");
    }
    return 0;
}
