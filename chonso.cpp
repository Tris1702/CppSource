#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
long long res=1;
void factorize(long long n)
{
    if (!(n%2)) res*=2;
    while (!(n%2)) n>>=1;
    for(long long i=3;i<=sqrt(n);i++)
    {
        if (!(n%i)) res*=i;
        while (!(n%i)) n/=i;        
    }
    if (n>1) res*=n;
    cout<<res;
}
void solve()
{
    long long n;
    cin>>n;
    factorize(n);
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}