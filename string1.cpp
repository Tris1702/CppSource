#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int k,dem=0;
	string s;
	cin>>s>>k;
	vector<int> dd(26,0);
	FORT(i,0,s.length()) dd[s[i]-'a']++;
	FORT(i,0,26)
		if (dd[i]==0) dem++;
	if (dem>k) cout<<0<<endl;
	else
	{
		FORT(i,0,26)
			if (dd[i]>1)
			{
				dem-=dd[i]-1;
				dd[i]=1;
			}
		if (dem<=0) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}