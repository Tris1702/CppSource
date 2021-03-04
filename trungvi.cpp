#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int n,s;
    long long res=0;
    cin>>n>>s;
    vector<int> a(n);
    FORT(i,0,n) cin>>a[i];
    sort(a.begin(),a.end());
    if (a[n/2]==s) 
    {
        cout<<0;
        return;
    }
    if (a[n/2]>s)
    {
        FORT(i,0,n/2+1) 
            if (a[i]>s) res+=a[i]-s;
        cout<<res;
        return;
    }
    FORT(i,n/2,n)
    {
        if (s>a[i]) res+=(s-a[i]);
    }
    cout<<res;
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}