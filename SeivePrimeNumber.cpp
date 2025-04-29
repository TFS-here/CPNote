#include<bits/stdc++.h>
using namespace std;
// int digit = log10(n) + 1;
const int N= 1e7+10;
vector<bool>isPrime(N,1);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i=2;i*i<N;++i)
    {
        isPrime[0]=isPrime[1]=0;
        if(isPrime[i])
        {
            for(int j=i*i;j<N;j+=i)
            {
                isPrime[j]=0;
            }
        }
    }

    int ab;
    cin>>ab;
    for(int i=0;i<ab;i++)
    cout<<i<<"\t=\t"<<isPrime[i]<<'\n';

    return 0;
}