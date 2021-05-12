#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int n;
bool dd[500]={};
vector<string> A, B;
void sinh1(int spt,string so)
{
    if (spt>n)
    {
        A.push_back(so);
        return;
    }
    for(char i='A';i<'A'+n;i++)
        if (!dd[i])
    {
        dd[i]=1;
        sinh1(spt+1,so+i);
        dd[i]=0;
    }
}
void sinh2(int spt,string so)
{
    if (spt>n)
    {
        B.push_back(so);
        return;
    }
    for(int i=1;i<=n;i++)
    {
        sinh2(spt+1,so+to_string(i));
    }
}
int main()
{
    cin>>n;
    sinh1(1,"");
    sinh2(1,"");
    for(string i: A)
    {
        for(string j: B) cout << i<<j<<endl;
    }
    return 0;
}
