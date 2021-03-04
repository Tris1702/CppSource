#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
typedef long long ll;
ll Fibo[1000001]={};
const int n=2,mod=1e9+7;
struct matrix
{
    ll a[3][3];
};
matrix mul_matrix(matrix &a, matrix &b)
{
    matrix c;
    c.a[1][1]=c.a[1][2]=c.a[2][1]=c.a[2][2]=0;
    for(int i = 1; i <= n; i++)
        for(int j = 1 ;j <= n; j++)
            for(int k = 1; k <= n; k++)
                c.a[i][j]=(c.a[i][j] + (a.a[i][k] * b.a[k][j]) % mod)% mod;
    return c;
}

matrix pow_matrix(matrix a, ll b)
{
    matrix res;
    res.a[1][1]=1;
    res.a[1][2]=0;
    res.a[2][1]=0;
    res.a[2][2]=1;
    for(ll i = b; i; i >>= 1)
    {
        if (i&1) res=mul_matrix(res,a);
        a=mul_matrix(a,a);
    }
    return res;
}
void solve()
{
    ll p;
    cin>>p;
    matrix b;
    b.a[1][1]=1;
    b.a[1][2]=1;
    b.a[2][1]=1;
    b.a[2][2]=0;
    b=pow_matrix(b,p-2);
    ll ans=(b.a[1][1] + b.a[1][2])%mod;
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}