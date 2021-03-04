#include <bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)

using namespace std;
string sl,sn,kq;
int main()
{
    freopen("trusolon.inp","r",stdin);
    freopen("trusolon.out","w",stdout);
    sl=sn=kq="";
    cin>>sl;
    cin>>sn;
    while (sn.length()<sl.length()) sn='0'+sn;
    int vt=sl.length()-1, nho=0;
    while (vt>=0)
    {
        int a=sl[vt]-48, b=sn[vt]-48+nho, tmp=0;
        nho=0;
        if (a>=b) tmp=a-b;
        else
        {
            nho=1;
            tmp=10+a-b;
        }
        vt--;
        char c=tmp+48;
        kq=c+kq;
    }
    while (kq[0]=='0' && kq.length()>1) kq.erase(0,1);
    cout<<kq;
    return 0;
}
