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
    int n, m, res = 0, dem = 0;
    cin >> n >> m;
    ll x[n+1][n+1]={};
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            x[i][j] = (i==j)? 0: 1e18;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b;
        x[a][b] = 1;
    }
    for(int k = 1; k<= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                x[i][j] = min(x[i][j], x[i][k]+x[k][j]);
    for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if (i!=j && x[i][j] < 1e18) 
			{
				// cout << i<<'-'<<j<<'='<<min(x[i][j], x[j][i])<<endl;
				res +=x[i][j];
				dem++;
			}
	printf("%.2f\n", (1.0*res)/(1.0*dem)); 
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}