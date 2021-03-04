#include<bits/stdc++.h>
using namespace std;
const int oo=1e9;
int n;
vector<int> a,tree;
void update(int id,int l, int r, int i,int v)
{
    if (i<l||i>r) return ;
    if (l==r)
    {
        tree[id]=v;
        return;
    }
    int mid=(l+r)/2;
    update(id*2,l,mid,i,v);
    update(id*2+1,mid+1,r,i,v);
    tree[id]=max(tree[id*2],tree[id*2+1]);
}
int get(int id, int l, int r, int u, int v)
{
    if (v<l||u>r) return -oo;
    if (u<=l&&r<=v) return tree[id];
    int mid=(l+r)/2;
    return max(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}
void solve()
{
    int k;
    cin>>n>>k;
    a.resize(n+1);
    tree.resize(4*n+1,0);
    for(int i=1;i<=n;i++) 
    {
        int so;
        cin>>so;
        update(1,1,n,i,so);
    }
    for(int i=1;i<=n-k+1;i++) cout<<get(1,1,n,i,i+k-1)<<' ';
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}