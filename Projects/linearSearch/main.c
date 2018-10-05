#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x,flag=0,arr[1000];
    printf("Enter size of array (less than = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter number to search = ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Number %d found at index = %d",x,i);
    else
        printf("Number not found");
    return 0;
}
