#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    /*printf("Enter any number -> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
            printf(" ");
        for(j=i;j<=2*i-1;j++)
            printf("%d",j);
        for(j=2*i-2;j>=i;j--)
            printf("%d",j);
        printf("\n");
    }*/

    /*register int i = 10;
    static char ch = 'D';
    auto float j;
    int k;
    k = ++ch && i;
    k = ++ch;
    j = (i--) + (++k)*2;
    printf("%d,%f",k,j);
    getch();*/

    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;

}
