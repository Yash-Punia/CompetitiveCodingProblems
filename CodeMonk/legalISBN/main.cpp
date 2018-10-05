#include <iostream>

using namespace std;

int main()
{
    int digit,sum=0;
    long isbn;
    cin>>isbn;
    for(int i=10;isbn>0;i--)
    {
        digit = isbn%10;
        sum += digit*i;
        isbn/=10;
    }
    if(sum%11==0)
        cout<<"Legal ISBN";
    else
        cout<<"Illegal ISBN";
    return 0;
}
