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
	int n;
	cin >> n;
	vector<int> a;
	map<int,int> ts;
	for(int i = 0; i < n; i++)
	{
		int so;
		cin >> so;
		if (ts[so] == 0) a.push_back(so);
		ts[so]++;
	}
	sort(a.begin(),a.end());
	cout<< (a.back()-a[0] +1 ) - (int)a.size() <<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}