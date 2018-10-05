#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,posN,negN,zeroes;
    posN = negN = zeroes = 0;
    while(1)
    {
        printf("\nEnter your input = ");
        scanf("%d",&x);
        if(x>0)
            posN++;
        else if(x<0)
            negN++;
        else
            zeroes++;
        printf("\nPositive numbers = %d\nNegative Numbers = %d\nNumber of Zeroes = %d\n",posN,negN,zeroes);
    }
    return 0;
}
