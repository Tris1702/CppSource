#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
typedef long long LL;
const LL mod=1e9+7;
LL Ckn[1001][1001]={};
void prepare()
{
    Ckn[0][0]=1;
    FORT(i,1,1001)
    {
        Ckn[i][0]=1;
        FORT(j,1,1001) Ckn[i][j]=(Ckn[i-1][j-1]%mod+Ckn[i-1][j]%mod)%mod;
    }
}
void solve()
{
    int n,k;
    cin>>n>>k;
    cout<<Ckn[n][k]<<endl;
}
int main()
{
    prepare();
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}