#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool dd[25]={};
int a[25]={};
void in(int n)
{
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<' ';
}
void sinh(int vt,int n)
{
    if (vt>n) in(n);
    for(int i=1;i<=n;i++)
        if (dd[i]==0)
    {
        a[vt]=i;
        dd[i]=1;
        sinh(vt+1,n);
        dd[i]=0;
    }
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        sinh(1,n);
        cout<<endl;
    }
	return 0;
}
