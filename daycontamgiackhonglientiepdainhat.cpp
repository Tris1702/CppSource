//Chua kiem chung, day la bai lam nham cua day con tam giac lien tiep
#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;

typedef long long ll;
void solve()
{
    int n;
    ll res = 0;
    cin >> n;
    vector<ll> a(n), inc(n,1), dec(n,1), b(n);
    FORT(i,0,n) 
    {
        cin >> a[i];
    }
    b.clear(); b.resize(n, 1e18);b[0] = -1e18;
    FORT(i,0,n) 
    {
        ll x = a[i];
        int k = upper_bound(b.begin(), b.end(), x) - b.begin();
        b[k] = x;
        inc[i] = k;
    }
    b.clear(); b.resize(n, 1e18);b[0] = -1e18;
    FORD(i,n,0) 
    {
        ll x = a[i];
        int k = upper_bound(b.begin(), b.end(), x) - b.begin();
        b[k] = x;
        dec[i] = k;
    }
    // for(int i :inc) cout << i <<' ';
    // cout << endl;
    // for(int i:dec) cout << i <<' ';
    // cout << endl;
    for(int i = 0; i < inc.size(); i++) res = max(res, inc[i] + dec[i] -1);
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    cin>>t;
    while (t--) solve();
}