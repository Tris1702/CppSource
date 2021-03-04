#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int res;
vector<vector<int> > F;
bool kt(vector<int> &a,vector<int> &b)
{
	FORT(i,0,26)
		if (b[i] && !a[i]) return 0;
	return 1; 
}
bool kt(vector<int> &a,vector<int> &b,vector<int> &c)
{
	FORT(i,0,26)
		if (a[i]-b[i]<=0 && c[i]) return 0;
	return 1; 
}
void BS(int l, int r, int vt)
{
	if (l>r) return;
	int m=(l+r)/2;
	if (!kt(F[vt],F[m-1],F.back())) BS(l,m-1,vt);
	else
	{
		res=min(res,vt-m+1);
		BS(m+1,r,vt);
	}
}
void solve()
{
	string s;
	cin>>s;
	res=s.length();
	s=' '+s;
	F.clear();
	F.resize(s.length(),vector<int> (26,0) );
	FORT(i,1,s.length())
	{
		F[i][s[i]-'a']++;
	}
	FORT(i,2,s.length())
		FORT(j,0,26) F[i][j]+=F[i-1][j];
	FORT(i,1,s.length())
		if (kt(F[i],F.back()))
		{
			res=min(res,i+1);
			BS(1,i,i);
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