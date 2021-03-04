#include <bits/stdc++.h>
#define FORT(i,a,b) for (int i=a;i<=b;i++)
using namespace std;
int T,a,b;
int GCD(int x,int y)
{
    while (x!=0 && y!=0)
    {
        if (x>y) x=x%y;
        else y=y%x;
    }
    if (x==0) return y;
    else return x;
}
int main()
{
    freopen("B1.inp","r",stdin);
    freopen("B1.out","w",stdout);
    cin>>T;
    FORT(i,1,T)
    {
        a=b=0;
        cin>>a>>b;
        int tmp=GCD(a,b);
        cout<<(a*b)/tmp<<' '<<tmp<<endl;
    }
    return 0;
}
