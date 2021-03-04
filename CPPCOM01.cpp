#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n,a[25]={};
void in()
{
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<' ';
}
void sinh(int vt)
{
    if (vt>n)
    {
        in();
        return;
    }
    for(int i=0;i<2;i++)
    {
        a[vt]=i;
        sinh(vt+1);
    }
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n;
        sinh(1);
        cout<<endl;
    }
	return 0;
}
