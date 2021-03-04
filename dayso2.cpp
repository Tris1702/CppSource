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
	cin>>n;
	int a[n+1]={};
	vector < vector<int> > res;
	for(int i = 0; i < n; i++) cin >> a[i];
	while (n--)
	{
		vector <int> tmp;
		for(int i = 0; i <= n; i++)
		{
			tmp.push_back(a[i]);
			a[i] += a[i+1];
		}
		res.push_back(tmp);
	} 
	for(int i = res.size()-1; i >= 0; i--)
	{
		cout << '['; 
		for(int j = 0; j < (int)res[i].size(); j++)
		{
			cout << res[i][j];
			if (j < res[i].size()-1) cout<< ' ';
		}
		cout << "] ";
	}
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}