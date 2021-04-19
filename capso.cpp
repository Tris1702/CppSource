#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void prepare()
{

}

bool cmp(pair<int,int> a, pair<int,int> b)
{
    return (a.F < b.F) || (a.F == b.F && a.S < b. S);
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int> > a(n);
    vector<int> L(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i].F >> a[i].S;
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i <n; i++)
    {
        L[i] = 1;
        for(int j = 0; j < i; j++)
            if (a[i].F > a[j].S) L[i] = max(L[i], L[j]+1);
    }
    int res =0;
    for(int i = 0; i < n; i++)
        res = max(res, L[i]);
    cout << res<< endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}