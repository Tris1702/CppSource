#include<bits/stdc++.h>
using namespace std;
vector<int> pos;
vector<int> a;
bool cmp(int a1,int b1)
{
	return a[pos[a1]]>a[pos[b1]];
}
int main()
{
	int n,m;
	cin>>n>>m;
	int sum=0;
	pos.resize(m);
	a.resize(m+1);
	for(int i=1;i<=m;i++) 
	{
		pos[i-1]=i;
		cin>>a[i];
		sum+=a[i];
	}
	sort(pos.begin(),pos.end(),cmp);
	if (sum<n) 
	{
		cout<<-1;
		return 0;
	}
	int trc=1;
	for(int i=1;i<=m;i++)
	{
		if (trc<=n) cout<<trc<<' ';
		else cout<<i<<' ';
		trc=trc+a[i];
	}
	return 0;
}