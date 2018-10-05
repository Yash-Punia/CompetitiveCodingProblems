#include <iostream>

using namespace std;

int main()
{
    long x,n;
    cin>>x;
    while(x--)
    {
        cin>>n;
        cout<<(n*(n+2)*(2*n+1))/8<<endl;
    }
    return 0;
}
