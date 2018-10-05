#include <iostream>

using namespace std;

int main()
{
    long x,squares;
    cin>>x;
    while(x)
    {
        squares=0;
        for(int i=0;i<x;i++)
        {
            squares += (x-i)*(x-i);
        }
        cout<<squares<<endl;
        cin>>x;
    }
    return 0;
}
