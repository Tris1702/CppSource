#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n;
vector< pair<int,int> > edge;
vector<int> root;
void Reset()
{
    edge.clear();
    root.clear();
    root.resize(1e4+1,0);
    edge.resize(1e4+1,mp(0,0));
}
void Print(int a)
{
    queue<int> q;
    q.push(a);
    cout<<a<<' ';
    while (!q.empty())
    {
        int sl=q.size();
        FORT(i,0,sl)
        {
            int u=q.front();
            q.pop();
            if (edge[u].F!=0) 
            {
                q.push(edge[u].F);
                cout<<edge[u].F<<' ';
            }
            if (edge[u].S!=0) 
            {
                q.push(edge[u].S);
                cout<<edge[u].S<<' ';
            }
        }
    }
}
int Find_root(int a)
{
    while (root[a]!=0) a=root[a];
    return a;
}
void solve()
{
    cin>>n;
    Reset();
    int a,b;
    char c;
    FORT(i,0,n)
    {
        cin>>a>>b>>c;
        root[b]=a;
        if (c=='L') edge[a].F=b;
        else edge[a].S=b;
    }
    Print(Find_root(a));
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}