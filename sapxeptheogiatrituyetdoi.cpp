#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int x;
vector<int> a;
void prepare()
{

}
bool cmp(int i, int j)
{
	if (abs(x-a[i]) < abs(x-a[j])) return 1;
	if (abs(x-a[i]) == abs(x-a[j]) && i < j) return 1;
	return 0;
}
void solve()
{
	int n;
	cin >> n >> x;
	a.clear();
	a.resize(n);
	vector<int> pos(n);
	for(int i = 0; i < n; i++) 
	{
		pos[i] = i;
		cin >> a[i];
	}
	sort(pos.begin(),pos.end(),cmp);
	for(int i: pos)
	{
		cout<< a[i] <<' ';
	}
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}