#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n]={};
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int F[k] ={};
	F[k] = 0, F[0]=1;
	for(int i = 0; i < n; i++)
		for(int s = k; s >= a[i]; s--)
			if (F[s] == 0 && (F[s-a[i]]==1)) F[s]=1;
	(F[k])? (cout<<"YES"<<endl) : (cout << "NO"<<endl); 
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}