#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string tong(string a,string b)
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
string hieu(string a,string b)
{
    bool kt=0;
    string kq="";
    while (a.length()<b.length()) a='0'+a;
    while (a.length()>b.length()) b='0'+b;
    if (a<b)
    {
        string tmp=a;
        a=b;
        b=tmp;
        kt=1;
    }
    int nho=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=0;
        if (a[i]-'0'<b[i]-'0'+nho)
        {
            tmp=(10+(a[i]-'0'))-(b[i]-'0'+nho);
            nho=1;
        }
        else
        {
            tmp=(a[i]-'0')-(b[i]-'0'+nho);
            nho=0;
        }
        char c=tmp+'0';
        kq=c+kq;
    }
    while (kq.length()>1&&kq[0]=='0') kq.erase(0,1);
    if (kt) kq='-'+kq;
    return kq;
}
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<b.length();i++)
        if (b[i]=='?')
        {
            string d=hieu(c,a);
            cout<<d[i];
            return 0;
        }
    for(int i=0;i<a.length();i++)
        if (a[i]=='?')
        {
            string d=hieu(c,b);
            cout<<d[i];
            return 0;
        }
    for(int i=0;i<c.length();i++)
        if (c[i]=='?')
        {
            string d=tong(b,a);
            cout<<d[i];
            return 0;
        }
	return 0;
}
