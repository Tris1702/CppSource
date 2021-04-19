#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

int Find(ll vt, ll m, ll n)
{
    if (vt == 0) vt = (1LL<<m) * n;
    if (m == 0) return vt;
    ll tmp = (1LL << (m-1)) *n;
    if (vt > tmp) return Find(vt-tmp-1, m-1, n);
    return Find(vt, m-1, n);
}

void solve()
{
    string s; cin >> s;
    ll vt, n = s.length(); cin >> vt;
    s= '#'+s;
    ll m = 0;
    while ((1LL<<m) * n < vt) m++;
    cout << s[Find(vt, m, n)]<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}