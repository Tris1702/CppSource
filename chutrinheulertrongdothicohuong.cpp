#include<bits/stdc++.h>
#define F first
#define S second

using namespace std;
int V, E;
vector<pair<int,int> > x;
void init()
{
	x.clear();
	x.resize(V+1);
}

void solve()
{
	cin >> V >> E;
	init();
	for(int i = 0; i < E; i++) 
	{
		int a, b;
		cin >> a >> b;
		x[a].S++;
		x[b].F++;
	}
	for(int i = 1; i <= V; i++)
		if (x[i].F != x[i].S)
		{
			cout << 0 <<endl;
			return;
		}
	cout << 1 << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}