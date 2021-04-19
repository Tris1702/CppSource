#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector<bool> cc, cp, c;
vector<vector<int> > x(9,vector<int> (9));
int check;
void Try(int h, int n, int sum)
{
    if (h > n)
    {
        check = max(check, sum);
        return;
    }
    for(int i = 1; i <= n; i++)
        if (c[i] == 0 && cp[i-h+n] == 0 && cc[i+h-1] == 0)
        {
            c[i] = 1;
            cp[i-h+n] = 1;
            cc[i+h-1] = 1;
            Try(h+1, n, sum + x[h][i]);
            c[i] = 0;
            cp[i-h+n] = 0;
            cc[i+h-1] = 0;
        }
}
void solve()
{
    int n = 8;
    cp.clear();
    cp.resize(n*2, 0);
    cc.clear();
    cc.resize(n*2, 0);
    c.clear();
    c.resize(n+1, 0);
    check = 0;
    for(int i = 1; i <= 8; i++)
        for(int j = 1; j <= 8; j++)
            cin >> x[i][j];
    Try(1, n, 0);
    cout << check << endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}