#include <stdio.h>

int recFact(int x)
{
    if(x==1)
        return 1;
    else
        return x*recFact(x-1);
}

int main()
{
    int x,fact;
    printf("Enter number --> ");
    scanf("%d",&x);
    for(int i=x;i>=1;i--)
        fact*=i;
    //fact = recFact(x);
    printf("Factorial of %d = %d",x,fact);
    return 0;
}
