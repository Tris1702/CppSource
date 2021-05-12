#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int n;
void prepare()
{

}

bool check(int n)
{
    return (n%2 == 0 && n/2 ==1) || (n%3 == 0 && n/3 ==1) ||(n-1 == 1);
}
int bfs()
{
    queue<pair<int,int> > q;
    q.push(mp(n, 0));
    while (!q.empty())
    {
        int u = q.front().F;
        int way = q.front().S;
        q.pop();
        if (check(u))
            return way+1;
        if (u%3 == 0) q.push(mp(u/3, way+1));
        if (u%2 == 0) q.push(mp(u/2, way+1));
        q.push(mp(u-1, way+1));
    }
}
void solve()
{
    cin >> n;
    cout << bfs() << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}