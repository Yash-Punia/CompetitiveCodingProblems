#include <stdio.h>

int main()
{
    int x,tx,rev=0;
    printf("Enter any number - ");
    scanf("%d",&x);
    tx = x;
    while(x>0)
    {
        rev=rev*10 + (x%10);
        x/=10;
    }
    if(rev==tx)
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome");
    return 0;
}
