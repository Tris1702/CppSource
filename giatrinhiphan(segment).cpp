#include <bits/stdc++.h>
#define FORT(i,a,b) for(int i=(a);i<=b;i++)
#define FORD(i,a,b) for(int i=(a);i>=b;i--)
#define LL long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
 
using namespace std;
int n,m,u,v;
pair <int,int> info[400005];
void ic (int x)
{
    int t=info[x].F;
    info[x*2].F+=t;
    info[x*2+1].F+=t;
    info[x*2].S+=t;
    info[x*2+1].S+=t;
    info[x].F=0;
}
void update(int x,int l,int h,int u,int v,int val)
{
    if (v<l||h<u) return;
    if (u<=l&&h<=v)
    {
        info[x].F+=val;
        info[x].S+=val;
        return;
    }
    ic(x);
    int m=(l+h)/2;
    update(x*2,l,m,u,v,val);
    update(x*2+1,m+1,h,u,v,val);
    info[x].S=max(info[x*2].S,info[x*2+1].S);
}
int query(int x,int l,int h,int i,int j)
{
    if (j<l||i>h) return -1;
    if (l>=i&&h<=j) return info[x].S;
    ic(x);
    int m=(l+h)/2;
    return max(query(x*2,l,m,i,j),query(x*2+1,m+1,h,i,j));
}
 
int main()
{
    scanf("%d%d",&n,&m);
    FORT(i,1,m)
    {
        scanf("%d%d",&u,&v);
        update(1,1,n,u,v,1);
    }
    FORT(i, 1, n)
    {
        printf("%d ",query(1,1,n,i,i)%2);
    }
    return 0;
}