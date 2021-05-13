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
    int s, t;
    cin >> s >> t;
    queue<pair<int,int> > q;
    set<int> dd;
    dd.insert(s);
    q.push(mp(s,0));
    while (!q.empty())
    {
        int u = q.front().F;
        int way = q.front().S;
        q.pop();
        if (u - 1 == t || u * 2 == t) 
        {
            cout << way+1 << endl;
            return;
        }

        if (u == t)
        {
            cout << way << endl;
            return;
        }
        if (u*2 <= t*2&&dd.count(u*2) == 0)
        {
            q.push(mp(u*2,way+1));
            dd.insert(u*2);
        }
        if (u-1 >0 && dd.count(u-1) == 0)
        {
            q.push(mp(u-1,way+1));
            dd.insert(u-1);
        }
    }
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}