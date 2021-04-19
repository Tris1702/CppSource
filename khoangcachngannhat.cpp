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
    ll c2, c1;
    cin >> n >> m >> c1 >> c2;
    vector<int> a, b;
    // map<int, bool> dd;
    for(int i = 0; i < n; i++) 
    {
        ll so;
        cin >> so;
        // if (dd[so] == 0)
        // {
            a.push_back(so);
            // dd[so] =1;
        // }
    } 
    // dd.clear();
    for(int i = 0; i < m; i++) 
    {
        ll so;
        cin >> so;
        // if (dd[so] == 0)
        // {
            b.push_back(so);
            // dd[so] =1;
        // }
    }
    sort(a.begin(), a.end());
    ll res = 1e18;
    for(int so: b)
    {
        int it1 = lower_bound(a.begin(), a.end(), so) - a.begin();
        if (it1 == n) it1 = n-1;
        int it2 = ((it1>0)? (it1-1): (it1));
        res = min(res, abs(c1-c2) + min(abs(a[it1]- so), abs(a[it2]-so)));
    }
    set<pair<int,int> > ans;
    for(int so: b)
    {
        int it1 = lower_bound(a.begin(), a.end(), so) - a.begin();
        if (it1 == n) it1 = n-1;
        int it2 = ((it1>0)? (it1-1): (it1));
        if (abs(c1-c2) + min(abs(a[it1]- so), abs(a[it2]-so)) == res) 
        {
            if (abs(a[it1]- so)<abs(a[it2]-so))
            {
                ans.insert(mp(min(a[it1],so), max(a[it1],so)));
            }
            else
            {
                if (abs(a[it1]- so)>abs(a[it2]-so))
                {
                    ans.insert(mp(min(a[it2],so), max(a[it2],so)));
                }
                else
                {
                    ans.insert(mp(min(a[it2],so), max(a[it2],so)));
                    if (it1!=it2)
                    {
                        ans.insert(mp(min(a[it1],so), max(a[it1],so)));
                    }
                }
            }
        }
    }
    cout << res <<' '<< ans.size();
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}