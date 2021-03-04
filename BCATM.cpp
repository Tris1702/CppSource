#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int b[21]={},kq=1e9,a[21]={},s,n;
void kt()
{
    int tong=0,res=0;
    for(int i=1;i<=n;i++)
        if (b[i]==1)
    {
        res++;
        tong+=a[i];
    }
    if (tong==s) kq=min(res,kq);
}
void sinh(int vt,int n)
{
    if (vt>n) kt();
    else
        for(int i=0;i<=1;i++)
    {
        b[vt]=i;
        sinh(vt+1,n);
    }
}
int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++) cin>>a[i];
    sinh(1,n);
    if (kq==1e9) cout<<-1; else cout<<kq;
	return 0;
}
