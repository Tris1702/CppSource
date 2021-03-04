#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair

using namespace std;
typedef long long LL;
const LL mod=1e9+7;
LL Ckn[1001][1001]={};
LL F[1001]={};
LL n,k;
void prepare()
{
    Ckn[0][0]=1;
    FORT(i,1,1001)
    {
        Ckn[i][0]=1;
        FORT(j,1,1001) Ckn[i][j]=(Ckn[i-1][j-1]%mod+Ckn[i-1][j]%mod)%mod;
    }
}
LL poww(LL a, LL b)
{
    LL res=1;
    for(int i=b;i;i>>=1)
    {
        if (i&1) res=(res*a)%mod;
        a=(a*a)%mod;
    }
    return res;
}
LL S(LL n, LL k)
{
    bool check=1;
    if (F[k]!=0) return F[k];
    LL res=poww(n+1,k+1)-1;
    if (res<0) res+=mod;
    if (check &&res%(k+1)==0) 
    {
        check=0;
        res/=k+1;
    }
    for(int i=k+1,j=0;i>=2;i--,j++)
    {
        LL tmp1=S(n,j);
        LL tmp2=Ckn[k+1][i];
        res=(res%mod-(tmp1*tmp2)%mod)%mod;
        if (res<0) res+=mod;
        if (check &&res%(k+1)==0) 
        {
            check=0;
            res/=k+1;
        }
    }
    if (res<0) res+=mod;
    if (check) 
    {
        check=0; 
       res/=k+1;
    }
    F[k]=res;
    return res;
}
void solve()
{
    cin>>n>>k;
    FORT(i,0,1001) F[i]=0;
    F[0]=n;
    cout<<S(n,k)%mod<<endl;
}
int main()
{
    prepare();
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}