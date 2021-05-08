#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int n;
bool dd[15]={};
void sinh(int spt,string so)
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
        sinh(spt+1,so+to_string(i));
        dd[i]=0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    sinh(1,"");
    return 0;
}
