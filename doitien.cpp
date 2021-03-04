#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
const int b[]={1,2,5,10,20,50,100,200,500,1000};
void prepare()
{

}
void solve()
{
	int n,res =0;
	cin>>n;
	for(int i = 9; i >=0; i--)
	{
		while(n >= b[i]) 
		{
			n-=b[i];
			res++;
		}
	}
	cout<<res<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}