#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string s;
bool dd[10]={};
int n,res=1e9;
int a[10]={};
void check()
{
    string tmp="";
    for(int i=1;i<n;i++)
        if (a[i]<a[i+1]) tmp=tmp+'I';
    else tmp=tmp+'D';
    int tong=0;
    if (tmp==s)
    {
        for(int i=1;i<=n;i++)
        {
            tong=tong*10+a[i];
        }
        res=min(res,tong);
    }
}
void sinh(int vt)
{
    if (vt>n) check();
    else
        for(int i=1;i<=9;i++)
        if (dd[i]==0)
    {
        a[vt]=i;
        dd[i]=1;
        sinh(vt+1);
        dd[i]=0;
    }
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        for(int i=0;i<10;i++) dd[i]=0;
        cin>>s;
        res=1e9;
        n=s.length()+1;
        sinh(1);
        cout<<res<<endl;
    }
	return 0;
}
