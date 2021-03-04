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
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (a[i] < b[j])
		{
			cout<< a[i] <<' ';
			i++;
		}
		else
		{
			cout << b[j] <<' ';
			j++;
		}
	}
	while (i < n)
	{
		cout<< a[i]<<' ';
		i++;
	}
	while (j < m) 
	{
		cout << b[j] <<' ';
		j++;
	}
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}