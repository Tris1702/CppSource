#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
map<int,bool> f;
bool kt(int a)
{
    if (a==0) return 1;
    bool dd[10]={};
    while (a)
    {
        int tmp=a%10;
        a/=10;
        if (tmp>5) return 0;
        if (dd[tmp]) return 0;
        dd[tmp]=1;
    }
    return 1;
}
void prepare()
{
    for(int i=0;i<=1e5;i++)
        if (kt(i)) f[i]=1;
}
void solve()
{
    int l,r;
    cin>>l>>r;
    int dem=0;
    FORT(i,l,r+1)
        if (f[i]) dem++;
    cout<<dem<<endl; 
}
int main()
{
    prepare();
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}