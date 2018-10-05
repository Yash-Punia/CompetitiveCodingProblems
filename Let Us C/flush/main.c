#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char another;
    int another,num;
    do
    {
        printf("Enter number ");
        scanf("%d",&num);
        printf("square of %d is %d\n",num,num*num);
        printf("Want to enter another number ? ");
        scanf("%d",&another);
    } while(another == 'y');
    return 0;
}
