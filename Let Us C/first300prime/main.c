#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int i;
    for(i=2;i<1000;i++)
    {
        if(prime(i))
            printf("%d\n",i);
    }
    return 0;
}

