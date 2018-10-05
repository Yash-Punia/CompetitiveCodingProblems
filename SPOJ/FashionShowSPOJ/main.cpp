#include <iostream>

#define MAX 1000

using namespace std;

void swapNum(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

void bsort(int A[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1-i;j++)
            if(A[j]<A[j+1])
                swapNum(A[j],A[j+1]);
}

int main()
{
    int t,n,j,men[MAX],women[MAX],sum;
    cin>>t;
    while(t--)
    {
        sum = 0;
        cin>>n;
        for(j=0;j<n;j++)
                cin>>men[j];
        for(j=0;j<n;j++)
                cin>>women[j];
        bsort(men,n);
        bsort(women,n);
        for(j=0;j<n;j++)
                sum+= men[j]*women[j];
        cout<<sum<<endl;
    }
    return 0;
}
