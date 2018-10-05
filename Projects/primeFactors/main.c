#include <stdio.h>
#include <stdlib.h>

void primeFactors(int x)
{
    int i;
    for(i=2;x>1;i++)
    {
        while(x%i==0)
        {
            printf("%d ", i);
            x/=i;
        }
    }
}

int main()
{
    int x;
    printf("Enter any number - ");
    scanf("%d",&x);
    primeFactors(x);
    return 0;
}
