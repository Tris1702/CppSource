#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
const long long m=1e9+7;
typedef long long LL;
LL poww(LL a,LL b)
{
    LL res=1;
    for(int i=b;i;i>>=1)
    {
        if (i&1) res=(res*a)%m;
        a=(a*a)%m;
    }
    return res;
}
void solve()
{
    LL n,k,res=1;
    cin>>n>>k;
    for(LL i=2;i<=min(n,m);i++)
    {
        res=(res+poww(i,k))%m;
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}