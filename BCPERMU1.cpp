#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int n,k,a[9]={},minn=1e9;
vector<string> x,tmp;
bool dd[9]={};
int so(string s)
{
    int gt=0;
    for(int i=0;i<s.length();i++) gt=gt*10+(s[i]-'0');
    return gt;
}
int chlech()
{
    sort(tmp.begin(),tmp.end());
    return so(tmp[tmp.size()-1])-so(tmp[0]);
}
void xuly()
{
    tmp.resize(0);
    for(int i=0;i<x.size();i++)
    {
        string s="";
        for(int j=0;j<k;j++) s=s+x[i][a[j]];
        tmp.push_back(s);
    }
    int tam=chlech();
    if (minn>tam) minn=tam;
}
void sinh(int vt)
{
    if (vt>=k) xuly();
    else
    {
        for(int i=0;i<k;i++)
            if (dd[i]==0)
        {
            a[vt]=i;
            dd[i]=1;
            sinh(vt+1);
            dd[i]=0;
        }
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        string tmp;
        cin>>tmp;
        x.push_back(tmp);
    }
    sinh(0);
    cout<<minn;
	return 0;
}
