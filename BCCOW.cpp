#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int kq=0,n,c,a[17]={},x[17]={};
void ktr()
{
    int res=0;
    for(int i=1;i<=n;i++)
        if (x[i]==1) res+=a[i];
    if (res<=c) kq=max(kq,res);
}
void sinh(int vt,int n)
{
    if (vt>n) ktr();
    else
        for(int i=0;i<=1;i++)
    {
        x[vt]=i;
        sinh(vt+1,n);
    }
}
int main()
{
    cin>>c>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sinh(1,n);
    cout<<kq;
	return 0;
}
