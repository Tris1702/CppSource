#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool dd[100005]={};
int main()
{
    int n,m,res=0;
    cin>>n>>m;
    FORT(i,0,n-1)
    {
        int so;
        cin>>so;
        dd[so]=1;
    }
    FORT(i,0,m-1)
    {
        int so;
        cin>>so;
        if (dd[so-1]==1||dd[so+1]==1) res++;
    }
    cout<<res;
	return 0;
}
