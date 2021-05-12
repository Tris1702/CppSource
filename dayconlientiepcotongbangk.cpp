#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void prepare()
{

}

void init()
{

}

void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n+1);
    for(int i = 1; i <= n; i++) 
    {
        ll so;
        cin >> so;
        a[i] = a[i-1]+so;
    }
    for(int i = 1; i <= n ;i++)
    {
        int it = lower_bound(a.begin(), a.end(), a[i]-k) - a.begin();
        if (it <= n && it!= i && a[i]-a[it] == k)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}