#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n,k,a[11]={};
void in()
{
    for(int i=1;i<=k;i++) cout<<a[i]<<' ';
    cout<<endl;
}
void sinh(int vt,int luu)
{
    if (vt>k)
    {
        in();
        return;
    }
    for(int i=luu+1;i<=n;i++)
    {
        a[vt]=i;
        sinh(vt+1,i);
    }
}
int main()
{
    cin>>n>>k;
    sinh(1,0);
	return 0;
}
