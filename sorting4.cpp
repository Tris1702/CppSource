#include<bits/stdc++.h>
using namespace std;
int n, m;

void Run()
{        
    vector<int> f(1e5+1,0),f1(1e5+1,0);
    cin>>n>>m;
    int tmp;
    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        f[tmp]++;
    }
    for(int i=0; i<m; i++)
    {
        cin>>tmp;
        f1[tmp]++;
    }
    for(int i=0; i<=100000; i++)
    {
        int sl=max(f[i], f1[i]);
        for(int j=0; j<sl; j++) cout<<i<<' ';
    }
    cout<<endl;
    for(int i=0; i<=100000; i++)
    {
        int sl=min(f[i], f1[i]);#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	//vector<int> a(n),b(m);
	vector<int> tsa(1e5+1,0),tsb(1e5+1,0);
	FORT(i,0,n) 
	{
		int so;
		cin>>so;
		tsa[so]++;
	}
	FORT(i,0,m) 
	{
		int so;
		cin>>so;
		tsb[so]++;
	}
	FORT(i,0,1e5+1)
	{
		int sl=max(tsa[i],tsb[i]);
		while (sl--) cout<<i<<' ';
	}
	cout<<endl;
	FORT(i,0,1e5+1)
	{
		int sl=min(tsa[i],tsb[i]);
		while(sl--) cout<<i<<' ';
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
        for(int j=0; j<sl; j++) cout<<i<<' ';
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}