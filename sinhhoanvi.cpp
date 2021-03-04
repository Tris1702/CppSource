#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int n;
bool dd[11]={};
void sinh(int spt,int so)
{
    if (spt>n)
    {
        cout<<so<<' ';
        return;
    }
    for(int i=1;i<=n;i++)
        if (!dd[i])
    {
        dd[i]=1;
        sinh(spt+1,so*10+i);
        dd[i]=0;
    }
}
int main()
{
    int T;
    cin>>T;
    FORT(t,0,T)
    {
        cin>>n;
        sinh(1,0);
        cout<<endl;
    }
    return 0;
}
