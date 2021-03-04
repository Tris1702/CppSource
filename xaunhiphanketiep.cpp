#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T)
	{
		string s;
		cin>>s;
		int vt=-1;
		FORD(i,s.length()-1,-1)
		{
			if (s[i]=='0') 
			{
				vt=i;
				break;
			}
		}
		if (vt!=-1) 
		{
			s[vt]='1';
			FORT(i,vt+1,s.length()) s[i]='0';
			cout<<s;
		}
		else
			FORT(i,0,s.length()) cout<<'0';
		cout<<endl;
	}
	return 0;
}