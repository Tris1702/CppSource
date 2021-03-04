#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
map< string,bool> dd;
string sta,fin;
int tr[6]={0,4,1,3,5,2};
int tl[6]={3,0,2,4,1,5};

string change(string a,bool cn)
{
    string res="";
    if (cn)
    {
        FORT(i,0,6) res+=a[tr[i]];
    }
    else
    {
        FORT(i,0,6) res+=a[tl[i]];
    }
    return res;
}
void bfs()
{
    queue< pair< string,int >  > q;
    q.push(mp(sta,0));
    dd[sta]=1;
    while (!q.empty())
    {
        string u=q.front().F;
        int w=q.front().S;
        q.pop();
        if (u==fin) 
        {
            cout<<w;
            return;
        }
        string v=change(u,0);
        if (dd[v]==0)
        {
            q.push(mp(v,w+1));
            dd[v]=1;
        }
        v=change(u,1);
        if (dd[v]==0)
        {
            q.push(mp(v,w+1));  
            dd[v]=1;
        }
    }
}
void solve()
{
    fin=sta="......";
    FORT(i,0,6) cin >> sta[i];
    FORT(i,0,6) cin >> fin[i];
    bfs();
}
int main()
{
    int t=1;
    //cin>>t;
    while (t--) solve();
}