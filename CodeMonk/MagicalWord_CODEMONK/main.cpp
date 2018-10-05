#include <iostream>
#include <string.h>

using namespace std;

int isPrime(int x)
{
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

char nearestPrime(char ch)
{
    char uPrimeCH,lPrimeCH;
    if(ch<65)
        ch=65;
    else if(ch>122)
        ch=122;
    uPrimeCH = lPrimeCH = ch;
    while(!isPrime(uPrimeCH))
        ++uPrimeCH;
    while(!isPrime(lPrimeCH))
        --lPrimeCH;
    if(ch-lPrimeCH == uPrimeCH-ch)
        return lPrimeCH;
    else if (ch-lPrimeCH<uPrimeCH-ch)
        if(isalnum(lPrimeCH))
            return lPrimeCH;
        else
            return uPrimeCH;
    else if(ch-lPrimeCH>uPrimeCH-ch)
        if(isalnum(uPrimeCH))
            return uPrimeCH;
        else
            return lPrimeCH;
}

int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        char s[len], magical[len];
        for(int i=0;i<len;i++)
            cin>>s[i];
        for(int i=0;i<len;i++)
        {
            magical[i] = nearestPrime(s[i]);
        }
        for(int i=0;i<len;i++)
            cout<<magical[i];
        cout<<endl;
    }
    return 0;
}
