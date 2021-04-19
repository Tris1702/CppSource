#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
typedef long long ll;
ll mod = 123456789;
ll poww(ll b)
{
    ll res = 1, a = 2;
    for(ll i = b; i ; i = i >> 1)
    {
        if (i&1) res = (res * a) % mod;
        a = (a * a) % mod;
    }
    return res;
}
void solve()
{
    ll n; cin >> n;
    n--;
    cout << poww(n) <<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}