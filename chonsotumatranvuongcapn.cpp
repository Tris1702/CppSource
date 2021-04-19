#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int n, k;
vector<vector<int> > a;
vector<vector<int> > ans;
vector<int> res;
void prepare()
{

}
void Try(int vt)
{
    if (vt == n)
    {
        int sum = 0;
        vector<bool> dd (n,0);
        for(int i = 0; i < res.size();i++) 
        {
            if (dd[res[i]] == 1) return; 
            sum += a[i][res[i]];
            dd[res[i]] = 1;
        }
        if (sum == k)
        {
            ans.push_back(res);
        }
        return;
    }
    for(int i = 0; i < n; i++)
    {
        res.push_back(i);
        Try(vt+1);
        res.pop_back();
    }
}
void solve()
{
    cin >> n >> k;
    a.resize(n,vector<int> (n));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) 
        {
            cin >> a[i][j];
        }
    }
    Try(0);
    cout << ans.size() <<endl;
    for(vector<int> x: ans)
    {
        for(int i: x) cout << i+1 <<' ';
        cout << endl;
    }
}
int main()
{
    int t=1;
    //cin>>t;
    while (t--) solve();
}