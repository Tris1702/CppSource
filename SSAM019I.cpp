#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define matrix vector<vector<long long> >
using namespace std;
vector<long long> F;
long long mod=1e15+7;
void nhan(matrix &a, matrix b,int n,int p,int m)
{
    matrix res(n);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        long long tmp=0;
        for(int k=0;k<p;k++) tmp=(tmp+((a[i][k]%mod)*(b[k][j]%mod))%mod)%mod;
        res[i].push_back(tmp);
    }
    a=res;
}
matrix poww(matrix a, int n)
{
    matrix res(3);

    res[0].push_back(1);res[0].push_back(0);res[0].push_back(0);
    res[1].push_back(0);res[1].push_back(1);res[1].push_back(0);
    res[2].push_back(0);res[2].push_back(0);res[2].push_back(1);
    for(int i=n;i;i>>=1)
    {
        if (i&1) nhan(res,a,3,3,3);
        nhan(a,a,3,3,3);
    }
    return res;
}
long long tribo(int n)
{
    matrix a(3);
    for(int i=0;i<3;i++) a[i].resize(3);
    a[0][0]=0;a[0][1]=1;a[0][2]=0;
    a[1][0]=0;a[1][1]=0;a[1][2]=1;
    a[2][0]=a[2][1]=a[2][2]=1;
    matrix b(3);
    b[0].push_back(1);
    b[1].push_back(2);
    b[2].push_back(3);
    matrix res=poww(a,n-1);
    nhan(res,b,3,3,1);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++) cout<<res[i][j]<<' ';
        cout<<endl;
    }
    return (long long)res[0][0];
}
void prepare()
{
    F[0]=1;
    for(int i=1;i<=1e9;i++)
    {
        long long tmp=(tribo(i)%mod+F[i-1]%mod)%mod;
        F.push_back(tmp);
    }
}
int main()
{
    int T;
    prepare();
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        cout<<F[n]<<endl;
    }
	return 0;
}
