#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> f;
void sinh(int vt,string s,int n)
{
	if (vt>n)
	{
		FORT(i,0,s.length())
			if (s[i]=='0') cout<<'A';
			else cout<<'B';
		cout<<' ';
		return;
	}
	for(char i='0';i<='1';i++) sinh(vt+1,s+i,n);
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T)
	{
		int n;
		f.resize(0);
		cin>>n;
		sinh(1,"",n);
		cout<<endl;
	}
	return 0;
}