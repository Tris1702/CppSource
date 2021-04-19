#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<vector<int> > x;
vector<int> trace,dd;
bool check=0;
void dfs(int u,int pre)
{
    dd[u] = 1;
	for(int v: x[u])
		if( dd[v] == 0)
		{
			dfs(v,u);
		}
		else if (dd[v]== 1)
		{
			check = 1;
			return;
		}
	dd[u] = 2;
}
void Reset(int V)
{
    x.clear();
    dd.clear();
    x.resize(V+1);
    dd.resize(V+1,0);
    check=0;
}
void solve()
{
    int E,V;
    cin>>V>>E;
    Reset(V);
    FORT(i,0,E)
    {
        int a,b;
        cin>>a>>b;
        x[a].push_back(b);
    }
    FORT(i,1,V+1)
        if (dd[i]==0)
        {
            dfs(i, 0);
        }
    (check)? (cout<<"YES"):(cout<<"NO");
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}