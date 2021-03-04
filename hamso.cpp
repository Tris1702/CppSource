#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
const int mod=2020;
void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    long long res=1;
    cin>>n;
    vector<long long> a(n+1);
    vector<bool> dd(2020,0);
    FORT(i,1,n+1) cin>>a[i];
    sort(a.begin()+1,a.end());
    FORT(i,1,n+1) 
    {
        if (a[i]>mod) a[i]%=mod;
        if (dd[a[i]])
        {
            cout<<0;
            return;
        }
        else dd[a[i]]=1;
    }
    FORT(i,1,n+1)
        FORT(j,1,i)
        {
            int tmp=a[i]-a[j];
            if (tmp<0) tmp+=mod;
            res=(res*tmp)%mod;
        }
    cout<<res%mod;
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}