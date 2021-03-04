#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int child[10001]={},cha[10001]={};
int root(int u)
{
    if (cha[u]!=u) cha[u]=root(cha[u]);
    return cha[u];
}
int main()
{
    int P;
    for(int i=1;i<=10000;i++)
    {
        cha[i]=i;
        child[i]=1;
    }
    cin>>P;
    for(int p=1;p<=P;p++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if (z==1)
        {
            int u=root(x),v=root(y);
            if (u==v) child[u]+=child[v];
            if (child[u]>child[v]) cha[v]=u;
            else cha[u]=v;
        }
        else
        {
            int u=root(x),v=root(y);
            if (u==v) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
	return 0;
}
