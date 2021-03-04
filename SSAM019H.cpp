#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<vector<long long> > x;
int m=1e9+7;
void nhan(vector<vector<long long> > &a,vector<vector<long long> > b)
{
    vector<vector<long long> > tmp;
    tmp=a;
    a[0][0]=((tmp[0][0]*b[0][0])%m+(tmp[0][1]*b[1][0])%m)%m;
    a[0][1]=((tmp[0][0]*b[0][1])%m+(tmp[0][1]*b[1][1])%m)%m;
    a[1][0]=((tmp[1][0]*b[0][0])%m+(tmp[1][1]*b[1][0])%m)%m;
    a[1][1]=((tmp[1][0]*b[0][1])%m+(tmp[1][1]*b[1][1])%m)%m;
}
void poww(vector<vector<long long> > &x,long long n)
{
    vector<vector<long long> > a,res;
    res.resize(2);
    res[0].push_back(0);
    res[0].push_back(1);
    res[1].push_back(1);
    res[1].push_back(1);
    a=x;
    for(long long i=n;i;i>>=1)
    {
        if (i&1) nhan(res,a);
        nhan(a,a);
    }
    x=res;
}
long long tinh(long long n)
{
    x.resize(2);
    x[0].push_back(0);
    x[0].push_back(1);
    x[1].push_back(1);
    x[1].push_back(1);
    poww(x,n);
    return x[0][0];
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long n;
        cin>>n;
        x.clear();
        cout<<tinh(n)<<endl;
    }
	return 0;
}
