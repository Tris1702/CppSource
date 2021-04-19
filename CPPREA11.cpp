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
    vector<int> a(n), inc(n), dec(n);
    FORT(i,0,n) 
    {
        cin >> a[i];
        inc[i] = a[i];
        dec[i] = a[i];
    }
    FORT(i,0,n)
        FORT(j,i+1,n)
        {
            if (a[j] > a[i])
                inc[j] = max(inc[j], inc[i]+a[j]);
        }
    FORD(i,n,0)
        FORD(j,i,0)
        {
            if (a[j] > a[i])
                dec[j] = max(dec[j], dec[i]+a[j]);
        }
    FORT(i,0,n)
        res = max(res, inc[i]+dec[i]-a[i]);
    cout << res << endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}