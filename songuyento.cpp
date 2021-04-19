#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector<int> x;
vector<int> res;
vector<vector<int> > ans;
void Try(int vt, int sum, int s, int k, int n)
{
    if (sum > s) return;
    if (sum == s)
    {
        if( res.size() == n) ans.push_back(res);
        return;
    }
    for(int i = vt; i < k; i++)
    {
        res.push_back(x[i]);
        Try(i+1, sum + x[i], s, k, n);
        res.pop_back();
    }
}
bool prime(int n)
{
    if (n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++)
        if (n%i == 0) return 0;
    return 1;
}
void init()
{
    x.clear();
    x.resize(0);
    res.clear();
    res.resize(0);
    ans.clear();
    ans.resize(0);
}
void solve()
{
    init();
    int n,p,s;
    cin >> n >> p >> s;
    for(int i = p+1; i <= s; i++)
        if (prime(i)) x.push_back(i);
    Try(0, 0, s, x.size(), n);
    cout << ans.size()<< endl;
    for(vector<int> tmp: ans)
    {
        for(int i: tmp) cout << i <<' ';
        cout<<endl;
    }
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}