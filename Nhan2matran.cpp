#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define matrix vector<vector<int> >
using namespace std;

matrix nhan(matrix a, matrix b,int n,int p,int m)
{
    matrix res(n);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        int tmp=0;
        for(int k=0;k<p;k++) tmp+=a[i][k]*b[k][j];
        res[i].push_back(tmp);
    }
    return res;
}
int main()
{
    matrix a,b;
    int n,p,m;
    cin>>n>>p>>m;
    a.resize(n);
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++)
    {
        int so;
        cin>>so;
        a[i].push_back(so);
    }
    b.resize(p);
    for(int i=0;i<p;i++)
        for(int j=0;j<m;j++)
    {
        int so;
        cin>>so;
        b[i].push_back(so);
    }
    matrix res=nhan(a,b,n,p,m);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++) cout<<res[i][j]<<' ';
        cout<<endl;
    }
	return 0;
}
