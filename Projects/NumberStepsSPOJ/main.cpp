#include <iostream>

using namespace std;

int oddEven(long x)
{
    return x%2;
}

int main()
{
    long x,y,t,result;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y;
        if(y==x || y==x-2)
        {
            if(oddEven(x) == 1)
                result = x+y-1;
            else
                result = x+y;
            cout<<result<<endl;
        }
        else
            cout<<"No Number\n";
    }
    return 0;
}
