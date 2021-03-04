#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)
#define endl '\n'
using namespace std;
void solve()
{
    int n,k,x;
    cin>>n;
    int *a;
    a=new int [n];
    FORT(i,0,n) scanf("%d",&a[i]);
    cin>>k>>x;
    int itl=lower_bound(a,a+n,x)-a-1;
    int itr=itl+1;
    if (a[itr]==x) itr++;
    itl-=k/2-1;
    itr+=k/2-1;
    if (itl<0)
    {
        itr+=-itl;
        itl=0;
    }
    if (itr>=n)
    {
        itl+=itr-n+1;
        itr=n-1;
    }
    FORT(i,itl,itr+1)
        if (a[i]!=x) printf("%d ",a[i]);
    printf("\n");
    delete a;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}