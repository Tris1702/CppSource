#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define T first
#define M second
#define LL long long
using namespace std;
LL noMax (LL a, LL b)
{
    LL x=b/a;
    return x+1;
}
LL gCD (LL a,LL b)
{
    while (a>0)
    {
        if (a<b) swap(a,b);
        a%=b;
    }
    return b;
}
LL lCD(LL a,LL b)
{
    LL tmp=a*b;
    return tmp/gCD(a,b);
}
void rGon(pair<LL,LL> &a)
{
    LL x=gCD(a.T,a.M);
    a.T/=x;
    a.M/=x;
}
pair<LL,LL> minu(pair<LL,LL> a, pair<LL,LL> b)
{
    LL x=lCD(a.M,b.M);
    pair<LL,LL> tmp;
    tmp.T=a.T*(x/a.M)-b.T*(x/b.M);
    tmp.M=x;
    rGon(tmp);
    return tmp;
}
void solve()
{
    pair<LL,LL> x;
    scanf("%lld%lld",&x.T,&x.M);
    rGon(x);
    bool ok=0;
    while (x.T!=1)
    {
        LL tmp=noMax(x.T,x.M);
        if (ok) printf("+ 1/%d ",tmp);
        else printf("1/%d ",tmp);
        x=minu(x,mp(1,tmp));
        ok=1;
    }
    if (ok) printf("+ %lld/%lld ",x.T,x.M);
    else printf("%lld/%lld ",x.T,x.M);
    printf("\n");
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}