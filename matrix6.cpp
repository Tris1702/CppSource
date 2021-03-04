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
	FORT(i,0,n)
	{
		FORT(j,0,n)
		{
			int so;
			cin>>so;
			if (i==0||i==n-1) cout<<so<<' ';
			else
			{
				if (j==0||j==n-1) cout<<so<<' ';
				else cout<<"  ";
			}
			
		}
		cout<<endl;
	}
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}