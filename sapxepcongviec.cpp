#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.S<b.S;
}
void solve()
{
    int n,res=1;
    cin>>n;
    pair<int,int> a[n]={};
    FORT(i,0,n) cin>>a[i].F;
    FORT(i,0,n) cin>>a[i].S;
    sort(a,a+n,cmp);
    int kt=a[0].S;
    FORT(i,1,n)
    {
        if (a[i].F>=kt)
        {
            kt=a[i].S;
            res++;
        }
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}