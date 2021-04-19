#include<bits/stdc++.h>

using namespace std;
int V, E;
vector<vector<int> > x;
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
		x[a].push_back(b);
		x[b].push_back(a);
	}
	int dem = 0;
	for(int i = 1; i <= V; i++)
	{
		if(x[i].size() % 2 == 0) dem++;
	}
	if (dem == V) cout << 2<<endl;
	else
		if (dem == V-2) cout << 1 << endl;
		else cout << 0 <<endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}