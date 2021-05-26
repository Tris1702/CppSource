#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair

using namespace std;
typedef long long ll;

ll bfs(ll n)
{
    queue<pair<ll,ll> > q;
    q.push(mp(n,0));
    set<ll> dd;
    dd.insert(n);
    while (!q.empty())
    {
        ll u = q.front().F;
        ll way = q.front().S;
        q.pop();
        if (u-1 == 1) return way+1;
        if (u == 1) return way;
        if (u>1 && dd.count(u-1)==0)
        {
            q.push(mp(u-1,way+1));
            dd.insert(u-1);
        }
        for(ll i = 2; i*i <= u; i++)
        {
            if(u%i==0 && dd.count(u/i)==0)
            {
                q.push(mp(u/i,way+1));
                dd.insert(u/i);
            }
        }
        
    }
}

void solve()
{
    ll n;
    cin >> n;
    cout << bfs(n) <<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}