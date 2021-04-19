#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n,vt;
vector<pair<int,int> > pre;
vector<int> tree,pos;
void Find_post(int l, int r,int Note)
{
    if (l>r) return;
    vt++;
    tree[Note]=pre[vt].F;
    int mid=pre[vt].S;
    Find_post(l,mid-1,2*Note);
    Find_post(mid+1,r,2*Note+1);
}
void Print(int Note)
{
    if (Note>=4*n||tree[Note]==0) return;
    Print(2*Note);
    Print(2*Note+1);
    cout<<tree[Note]<<' ';
}
void Reset()
{
    pre.clear();
    tree.clear();
    pos.clear();
    pos.resize(n+5);
    pre.resize(n+5);
    tree.resize(4*n+5,0);
    vt=0;
}
bool cmp(int a,int b)
{
    return pre[a]<pre[b];
}
void solve()
{
    cin>>n;
    Reset();
    FORT(i,1,n+1) 
    {
        cin>>pre[i].F;
        pos[i]=i;
    }
    sort(pos.begin(),pos.end(),cmp);
    FORT(i,1,n+1) pre[pos[i]].S=i;
    Find_post(1,n,1);
    Print(1);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}