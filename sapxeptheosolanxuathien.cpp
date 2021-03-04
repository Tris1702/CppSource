#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector<int> ts;
void prepare()
{

}
bool cmp(int a, int b)
{
	return (ts[a] > ts[b] || (ts[a] == ts[b] && a < b));
}
void solve()
{
	int n;
	cin >> n;
	vector<int> a;
	ts.clear();
	ts.resize(1e5+1,0);
	for(int i = 0; i < n; i++) 
	{
		int so;
		cin >> so;
		if (ts[so] == 0) a.push_back(so);
		ts[so]++;
	}
	sort(a.begin(),a.end(),cmp);
	for(int x: a)
	{
		for(int i = 0; i < ts[x]; i++) cout << x << ' ';
	}
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}