#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
typedef long long ll;
ll Fibo[1000001]={};
int n,mod=1e9+7;
struct matrix
{
    ll a[25][25]={};
};
matrix I;

matrix mul_matrix(matrix a, matrix b)
{
    matrix c;
    
    for(int i = 1; i <= n; i++)
        for(int j = 1 ;j <= n; j++)
            for(int k = 1; k <= n; k++)
                c.a[i][j]=(c.a[i][j] + (a.a[i][k] * b.a[k][j]) % mod)% mod;
    return c;
}
matrix sum_matrix(matrix a, matrix b)
{
    matrix c;
    for(int i = 1; i <= n; i++)
        for(int j = 1 ;j <= n; j++)
            c.a[i][j]=(a.a[i][j] + b.a[i][j]) % mod;
    return c;
}
matrix pow_matrix(matrix a, int b)
{
    matrix res=I;
    for(int i = b; i; i >>= 1)
    {
        if (i&1) res=mul_matrix(res,a);
        a=mul_matrix(a,a);
    }
    return res;
}/
matrix Find(matrix a,int k)
{
    if (k==1) return mul_matrix(I,a);
    if (k%2==0) return mul_matrix( sum_matrix( I, pow_matrix(a,k/2) ) ,Find(a, k/2));
    else return sum_matrix(mul_matrix(sum_matrix(I,pow_matrix(a,k/2)) ,Find(a, k/2)), pow_matrix(a,k)); 
}
void solve()
{
    int k;
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=n; j++) 
        {
            I.a[i][j]=0;
            if (i==j) I.a[i][j]=1;
        }
    }
    matrix a;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j<=n; j++) cin >> a.a[i][j];
    a=Find(a,k);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=n; j++) cout << a.a[i][j]<<' ';
        cout << endl;
    }
}
int main()
{
    int t=1;
    // cin>>t;
    
    while (t--) solve();
}