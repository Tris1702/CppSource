#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int n, k, res = 0, tong;
int sum[20]={}, sl[20]={};

void chia(int gr, int vt)
{
    if (gr > k) 
    {
        if (vt == n) res++;   
        return;
    }
    for(int i = vt+1; i <= n; i++)
    {
        if (sum[i] - sum[vt] == tong)
        {
            chia(gr+1, i);
        } 
    }
}

void solve()
{
    cin >>n >> k;
    for(int i = 1; i <= n; i++)
    {
        int so;
        cin >> so;
        sum[i] = sum[i-1]+so;
    }
    if (sum[n] % k != 0) 
    {
        cout << 0;
        return;
    }
    tong = sum[n]/k;
    chia(1, 0);
    cout << res;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}