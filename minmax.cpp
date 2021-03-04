#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string maxx(int m,int s)
{
	string res="";
	int dem=0;
	while (s>=9) 
	{
		res=res+'9';
		s-=9;
	}
	if (s>0) 
	{
		res=res+char(s+'0');
	}
	while (res.length()<m)
		res+='0';
	return res;
}
string minn(int m, int s, string tmp)
{
	string res="";
	int dem=0,vt=tmp.length()-1;
	while (vt>=0)
	{
		char c=tmp[vt];
		if (c=='0'&&dem==0) 
		{
			res=res+'1';
			dem=1;
			vt--;
			continue;
		}
		if (c!='0'&&dem==1)
		{
			res=res+char(c-1);
			dem=m;
			vt--;
			continue;
		}
		res=res+c;
		vt--;
	}
	return res;
}
void solve()
{
	int m,s;
	cin>>m>>s;
	if (s>m*9||(s==0&&m>1)) 
	{
		cout<<"-1 -1"<<endl;
		return;
	}
	if (s==0&&m==1) cout<<0<<' '<<0<<endl;
	else
	{
		string tmp=maxx(m,s);
		string tmp2=minn(m,s,tmp);
		cout<<tmp2<<' '<<tmp<<endl;
	}
	
}
int main()
{
	int T=1;
	//cin>>T;
	FORT(t,0,T) solve();
	return 0;
}