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
    int n, dem = 0;
    cin >> n;
    vector<ll> a;
    for(int i = 0; i < n; i++) 
    {
        ll so;
        cin >> so;
        if(so) a.push_back(so);
        else dem = 1;
    }
    n=a.size();
    sort(a.begin(), a.end());
    ll res= max(a[0]*a[1], max(a[0]*a[1]*a[n-1], max(a[n-1]* a[n-2], a[n-1]*a[n-2]*a[n-3])));
    cout << ((res<0 && dem)? 0: res);
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}