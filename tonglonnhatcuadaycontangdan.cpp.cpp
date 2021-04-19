#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
void solve()
{
    int n, res = 0;
    cin >> n;
    vector<int> a(n), f(n);
    FORT(i,0,n) 
    {
        cin >> a[i];
        f[i] = a[i];
    }
    FORT(i,0,n)
        FORT(j,i+1,n)
            if (a[j] > a[i])
                f[j] = max(f[j], f[i]+a[j]);
    FORT(i,0,n) res = max(res, f[i]);
    cout << res << endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}