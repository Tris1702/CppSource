#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<string> x;
int cay[11]={},chua[11]={};
void sinh(string s,int vt,int n)
{
    if (vt>n) x.push_back(s);
    else
        for(int i=0;i<=1;i++)
        {
            char c=i+'0';
            sinh(s+c,vt+1,n);
        }
}
int docay(string s)
{
    int res=0;
    for(int i=0;i<s.length();i++)
        if (s[i]=='1') res+=cay[i+1];
    return res;
}
int dochua(string s)
{
    int res=1;
    for(int i=0;i<s.length();i++)
        if (s[i]=='1') res*=chua[i+1];
    return res;
}
int main()
{
    int n,minn=1e9;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>chua[i]>>cay[i];
    x.resize(0);
    sinh("",1,n);
    for(int i=1;i<x.size();i++)
    {
        int cayy=docay(x[i]);
        int chuaa=dochua(x[i]);
        if (minn>fabs(cayy-chuaa))
            minn=fabs(cayy-chuaa);
    }
    cout<<minn;
	return 0;
}
