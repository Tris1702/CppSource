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
    int n, m;
    cin >> n >> m;
    ll x[n+1][n+1]={};
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            x[i][j] = (i==j)? 0: 1e18;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        x[a][b] = x[b][a] = c;
        // x[a][b] = c;
    }
    for(int k = 1; k<= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                x[i][j] = min(x[i][j], x[i][k]+x[k][j]);
    int Q;
    cin >> Q;
    while (Q--)
    {
        int a, b;
        cin >> a >> b;
        cout << x[a][b]<<endl;
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}