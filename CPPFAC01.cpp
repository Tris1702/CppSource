#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> dd;
void tach(int so,bool dau)
{
	for(int i=2;i<=sqrt(so);i++)
		while (so%i==0)
		{
			(dau)? (dd[i]++) :(dd[i]--); 
			so/=i;
		}
	if (so>1) (dau)? (dd[so]++): (dd[so]--);
}
void solve()
{
	int n;
	string s;
	cin>>n>>s;
	dd.clear();
	dd.resize(10,0);
	FORT(i,0,s.length()) 
	{
		int tmp=s[i]-'0';
		FORT(j,2,tmp+1) tach(j,1);
	}
	FORD(i,10,2)
		if (dd[i]>0)
		{
			while (dd[i]--) 
			{
				FORT(j,2,i) tach(j,0);
				cout<<i;
			}
		}
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}