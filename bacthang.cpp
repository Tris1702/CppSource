#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
typedef long long LL;
const int mod=1e9+7;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<LL> F(n+1),sum(n+1);
    FORT(i,0,min(k,n))  F[i]=1;
    sum[0]=1;
    FORT(i,1,n)
    {
        if (i<=k) F[i]=(F[i]+sum[i-1])%mod;
        else 
        {
            LL tmp=(sum[i-1]-sum[i-k-1])%mod;
            if (tmp<0) tmp+=mod;
            F[i]=(F[i]+tmp)%mod;
        }
        sum[i]=(sum[i-1]+F[i])%mod;
    }
    cout<<F[n-1]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}