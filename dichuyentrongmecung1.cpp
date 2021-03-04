#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector<vector<int> > a;
vector<string> res;
int n;
void prepare()
{

}
void bfs(pair<int,int> st)
{
	queue<pair<pair<int,int> ,string> > q;
	q.push(mp(st,""));
	while (!q.empty())
	{
		pair<int,int> u = q.front().F;
		string way = q.front().S;
		q.pop();
		if (u.F == n-1 && u.S == n-1)
		{
			res.push_back(way);
			continue;
		}
		if (u.F + 1 < n && a[u.F+1][u.S] == 1) 
		{
			q.push(mp(mp(u.F+1,u.S),way+'D'));
		}
		if (u.S + 1 < n && a[u.F][u.S+1] == 1)
		{
			q.push(mp(mp(u.F,u.S+1),way+'R'));
		}
	}
}
void solve()
{
	cin >> n;
	a.clear();
	res.clear();
	a.resize(n, vector<int> (n,0));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) cin >>a[i][j];
	if(a[0][0]==0 )
	{
		cout<<-1<<endl;
		return;
	}
	bfs(mp(0,0));
	if (res.size() == 0) cout<<-1<<endl;
	else
	{
		sort(res.begin(), res.end());
		for(string s:res) cout<<s<<' ';
		cout<<endl;
	}
	
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}