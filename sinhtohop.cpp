#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int n,k;
bool dd[11]={};
vector<int> s;
void sinh(int spt,int k,int n)
{
    if (spt>k)
    {
        for(int i=1;i<s.size();i++)
            cout<<s[i];
        cout<<' ';
        return;
    }
    for(int i=s[spt-1]+1;i<=n;i++)
        if (!dd[i])
        {
            dd[i]=1;
            s.push_back(i);
            sinh(spt+1,k,n);
            s.pop_back();
            dd[i]=0;
        }
}
int main()
{
    int T;
    cin>>T;
    FORT(t,0,T)
    {
        s.resize(0);
        cin>>n>>k;
        s.push_back(0);
        sinh(1,k,n);
        cout<<endl;
    }
    return 0;
}
