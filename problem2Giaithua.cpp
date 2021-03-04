#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
typedef long long ll;
ll n,k;
map<ll, ll> q;
vector<ll> factor;
void toFactor(ll k)
{   
    for(ll i=2;i<=sqrt(k);i++)
        if (k%i==0)
        {
            factor.push_back(i);
            int cnt=0;
            while (k%i==0)
            {
                cnt++;
                k/=i;
            }
            q[i]=cnt;
        }
    if (k>1) 
    {
        factor.push_back(k);
        q[k]=1;
    }
}
ll findC(ll n, ll f)
{
    int res=0;
    while (n>=f)
    {
        res+=n/f;
        n/=f;
    }
    return res;
}
void solve()
{
    ll res=1e18;
    cin>>n>>k;
    toFactor(k);
    for(int i=0;i<factor.size();i++)
        if (q[factor[i]]>0)
        {
            ll c=findC(n,factor[i]);
            if (c<q[factor[i]])
            {
                cout<<0<<endl;
                return;
            } 
            res=min(res,c/q[factor[i]]);
        }
    cout<<res<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) 
    {
        q.clear();
        factor.resize(0);
        solve();
    }
}