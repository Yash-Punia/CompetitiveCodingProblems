#include <iostream>

using namespace std;

long long trailingZeroes(long long n)
{
    long long zeroes=0;
    for(long long i=5;n/i>0;i*=5)
    {
        zeroes +=n/i;
    }
    return zeroes;
}

int main()
{
    long long nZeroes,currentZeroes,t,num,total,ans[100000];
    cin>>t;
    while(t--)
    {
        num=2;
        total=0;
        cin>>nZeroes;
        do
        {
            currentZeroes = trailingZeroes(num);
            if(currentZeroes==nZeroes)
            {
                ans[total++] = num;
            }
            num++;
        } while(currentZeroes<=nZeroes);
            cout<<total<<endl;
    for(long long i=0;i<total;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    }
    return 0;
}
