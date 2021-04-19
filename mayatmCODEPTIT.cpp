#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int n, s;
vector<int> x;
bool check = 0;
void Try(int vt, int sum, int s, int dem)
{   
    if (check) return; 
    if (sum > s) return;
    if (sum == s)
    {
        check = 1;
        cout << dem << endl;
        return;
    }
    for(int i = vt; i < x.size(); i++)
    {
        Try(i+1, sum + x[i], s, dem+1);
    }
}
void init()
{
    check = 0;
    x.clear();
    x.resize(n);
}
void solve()
{
    cin >> n >> s;
    init();
    for(int i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end(), greater<int>() );
    Try(0, 0, s, 0);
    if (!check) cout << -1 << endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}