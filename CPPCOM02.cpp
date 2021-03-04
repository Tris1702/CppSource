#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[25]={};
void in(int k)
{
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<' ';
}
void sinh(int vt,int trc,int n,int k)
{
    if (vt>k)
    {
        in(k);
        return;
    }
    for(int i=trc+1;i<=n;i++)
    {
        a[vt]=i;
        sinh(vt+1,a[vt],n,k);
    }
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,k;
        cin>>n>>k;
        sinh(1,0,n,k);
        cout<<endl;
    }
	return 0;
}
