#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
void solve()
{
	int n,k;
	long long res = 0, res2 = 0;
	cin>> n>>k;
	int a[n]={};
	FORT(i,0,n) 
    {
        cin>>a[i];
        res+=a[i];
    }
	sort(a,a+n);
	k = min(k,n-k); 
    for(int i = 0; i < k; i++) res2+=a[i];
	long long res1 = res- res2;
    cout<<abs(res1 - res2)<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}