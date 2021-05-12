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
    int n, res = 0;
    cin >> n;
    vector<int> a(n), inc(n,1), dec(n,1);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1, j = n-2; i < n; i++, j--)
    {
        if (a[i] > a[i-1]) inc[i] = inc[i-1] + 1;
        if (a[j] > a[j+1]) dec[j] = dec[j+1] + 1;
    }
    for(int i = 0; i < n; i++)
        res = max(res, inc[i]+dec[i]-1);
    cout << res << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}