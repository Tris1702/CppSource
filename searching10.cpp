#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<bool> dd(1e6+1,0);
vector<int> f;
void prepare()
{
	dd[1]=dd[0]=1;
	for(int i=2;i<=1e6;i++)
		if (!dd[i])
		{
			for(long long j=(long long)i*i;j<=1e6;j+=i) dd[j]=1;
			f.push_back(i);
		}
}
void solve()
{
	int n;
	cin>>n;
	int vt=lower_bound(f.begin(),f.end(),n)-f.begin();
	FORT(i,0,vt)
	{
		int j=lower_bound(f.begin(),f.end(),n-f[i])-f.begin();
		if (f[i]+f[j]==n)
		{
			cout<<f[i]<<' '<<f[j]<<endl;
			return;
		}
	}
	cout<<-1<<endl;
}
int main()
{
	prepare();
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}