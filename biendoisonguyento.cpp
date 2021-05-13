#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<int> Prime;
bool nt(int a)
{
    for(int i = 2; i*i <= a; i++)
        if (a%i == 0) return 0;
    return 1;
}
void prepare()
{
    for(int i = 1000; i <= 9999; i++)
        if (nt(i)) Prime.push_back(i);
}
int diff(int a, int b)
{
    int dem = 0;
    while (a>0)
    {
        if (a%10 != b%10) dem++;
        a/=10;
        b/=10;
    }
    return dem;
}
int bfs(int s, int t)
{
    bool dd[10001]={};
    queue<pair<int,int> > q;
    q.push(mp(s, 0));
    dd[s] = 1;
    while (!q.empty())
    {
        int u = q.front().F;
        int way = q.front().S;
        q.pop();
        if (u == t) 
        {
            return way;
        }
        for(int v: Prime)
            if (diff(u, v) == 1 && dd[v] == 0) 
            {
                dd[v] = 1;
                q.push(mp(v, way+1));
            }
    }
}
void solve()
{
    int s, t;
    cin >> s >> t;
    cout << bfs(s, t) << endl;
}
int main()
{
    prepare();
    int t = 1;
    cin >> t;
    while (t--) solve();
}