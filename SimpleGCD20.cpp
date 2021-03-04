#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
typedef long long LL ;
LL res=0;
vector<LL> a,F;
LL gcd(LL a,LL b)
{
    while (a)
    {
        if (a<b) swap(a,b);
        a%=b;
    }
    return b;
}
LL lcm(LL a,LL b)
{
    return ((a/gcd(a,b))*b);
}
void sinh(int n, LL l, LL r)
{
    LL c=1<<n;
    for(LL i=1;i<c;i++)
    {
        LL tmp=1;
        int dem=0,vt=0;
        for(LL j=i;j;j>>=1)
        {
            if (j&1) 
            {
                dem++;
                tmp=lcm(tmp,F[vt]);
            }
            vt++;
        }
        if (dem%2) res+=r/tmp-(l-1)/tmp;
        if (dem%2==0) res-=r/tmp-(l-1)/tmp;
    }
}
void solve()
{
    int n;
    LL l,r;
    cin>>n;
    a.resize(n);
    FORT(i,0,n) cin>>a[i];
    cin>>l>>r;
    sort(a.begin(),a.end());
    FORD(i,n,0)
    {
        bool ok=1;
        FORD(j,i,0)
            if (a[i]%a[j]==0) 
            {
                ok=0;
                break;
            }
        if (ok) F.push_back(a[i]);
    }
    n=F.size();
    sinh(n,l,r);
    cout<<res;
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}