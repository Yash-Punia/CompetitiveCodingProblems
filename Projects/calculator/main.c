#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char ch;
    printf("Enter your expression -> (with spaces)\n");
    scanf("%d %c %d",&x,&ch,&y);
    switch(ch)
    {
        case '+': printf("The sum of two numbers is = %d",x+y);
                    break;
        case '-': printf("The difference of two numbers = %d",x-y);
                    break;
        case '*':
        case 'x': printf("The product of two  numbers = %d",x*y);
                    break;
        case '/': printf("The quotient when %d is divided by %d",x,y,x/y);
                    break;
        default: printf("Wrong operator!");
    }
    return 0;
}
