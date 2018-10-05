#include <iostream>

using namespace std;

int x;

int main()
{
    long d,toffee=0;
    float r,x,circumference;
    cin>>d;
    while(d--)
    {
        cin>>r>>x;
        circumference = 2*22*r/7;
        if(100*x>=circumference)
            toffee++;
    }
    cout<<toffee;
    return 0;
}
