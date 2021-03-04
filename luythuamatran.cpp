#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
const long long mod=1e9+7;
vector<vector<long long> > mulmatrix(vector<vector<long long> > &x,vector<vector<long long> > &y)
{
    vector<vector<long long> > res;
    int a=x.size(),b=x[0].size(),c=y[0].size();
    res.resize(a,vector<long long>(c));
    FORT(i,0,a)
        FORT(j,0,c)
            FORT(k,0,b) res[i][j]+=((x[i][k]%mod) *(y[k][j]%mod))%mod;
    return res;
}
void poww(vector<vector<long long> > &a,int b, vector<vector<long long> > &res)
{
    b--;
    for(int i=b;i;i>>=1)
    {
        if (i&1) res=mulmatrix(a,res);
        a=mulmatrix(a,a);
    }
}
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<vector<long long> > a(n,vector<long long> (n)),res;
    FORT(i,0,n)
        FORT(j,0,n) cin>>a[i][j];
    res=a;
    poww(a,k,res);
    FORT(i,0,n)
    {
        FORT(j,0,n) cout<<res[i][j]%mod<<' ';
        cout<<endl;
    }
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}