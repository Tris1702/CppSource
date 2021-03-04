#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int ucln(int a,int b)
{
    while (b>0)
    {
        if (a>b) swap(a,b);
        b%=a;
    }
    return a;
}
int main()
{
    int n,m,nhat=0;
    cin>>n>>m;
    int tmp=n*m/ucln(n,m);
    int pc=tmp/m,pn=tmp/n;
    int du=0;
    for(int i=1;i<=n;i++)
    {
        int dem=0;
        if ((pn+du)%pc==0)
        {
            dem=(pn+du)/pc;
            nhat+=dem-1;
        }
        else
        {
            dem=(pn+du)/pc;
            nhat+=dem;
        }
        if (du==pc) nhat--;
        du=(pn+du)-(dem*pc);
    }
    cout<<nhat;
	return 0;
}
