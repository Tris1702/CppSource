#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	FORT(i,0,n) cin>>a[i];
	FORT(i,0,n) cin>>b[i];
	FORT(i,1,n)	
	{
		a[i]+=a[i-1];
		b[i]+=b[i-1];
	}
	int res=0;
	FORT(i,0,n)
		FORT(j,i+1,n)
		{
			if (i==0&&a[j]==b[j]) res=max(res,j+1);
			if (i>0&&a[j]-a[i-1]==b[j]-b[i-1]) res=max(res,j-i+1);
		}
	cout<<res<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}