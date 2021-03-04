#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n,cha[500001]={},child[500001]={};
int root(int a)
{
    if (cha[a]!=a) cha[a]=root(cha[a]);
    return cha[a];
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cha[i]=i;
        child[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int u=root(a),v=root(b);
        if (u!=v)
        {
            if (child[u]<=child[v]) child[v]+=child[u];
            else child[u]+=child[v];
            if (child[u]<child[v]) cha[a]=b;
            else cha[b]=a;
        }
    }
    int maxx=0;
    for(int i=1;i<=n;i++)
        if (maxx<child[i]) maxx=child[i];
    cout<<maxx;
	return 0;
}
