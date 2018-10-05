#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j;
    printf("Enter any number - ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=x-i;j>0;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
