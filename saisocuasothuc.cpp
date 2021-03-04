#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string sum(string a,string b)
{
    string kq="";
    while (a.length()<b.length()) a='0'+a;
    while (a.length()>b.length()) b='0'+b;
    int nho=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        char c;
        int tmp=(a[i]-'0')+(b[i]-'0')+nho;
        if (tmp>=10)
        {
            nho=1;
            c=tmp%10+'0';
        }
        else
        {
            c=tmp+'0';
            nho=0;
        }
        kq=c+kq;
    }
    if (nho==1) kq='1'+kq;
    return kq;
}
void solve()
{
    int n;
    string f1="1",f2="1";
    cin>>n;
    if (n==1||n==2) 
    {
        cout<<1;
        return;
    }
    if (n==0) 
    {
        cout<<0;
        return;
    }
    FORT(i,2,n)
    {
        string tmp=f2;
        f2=sum(f1,tmp);
        f1=tmp;
    }
    cout<<f2;
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}