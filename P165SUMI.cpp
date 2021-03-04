#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
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
string tich(string a, string b)
{
    string kq="";
    if (a>b)
    {
        string tmp=a;
        a=b;
        b=tmp;
    }
    for(int i=a.length()-1;i>=0;i--)
    {
        string res="";
        int nho=0;
        for(int j=b.length()-1;j>=0;j--)
        {
            int tmp=(a[i]-'0')*(b[j]-'0')+nho;
            char c;
            if (tmp>=10)
            {
                int tmp1=tmp%10;
                c=tmp1+'0';
                nho=tmp/10;
            }
            else
            {
                c=tmp+'0';
                nho=0;
            }
            res=c+res;
        }
        if (nho>0)
        {
            char c=nho+'0';
            res=c+res;
        }
        for(int k=i+1;k<a.length();k++) res=res+'0';
        kq=tong(res,kq);
    }
    while (kq[0]=='0'&&kq.length()>1) kq.erase(0,1);
    return kq;
}
string sx(long long so)
{
    string res="";
    bool kt=0;
    if (so<0)
    {
        kt=1;
        so=fabs(so);
    }
    while (so>0)
    {
        char c=so%10+'0';
        res=c+res;
        so/=10;
    }
    if (kt) res='-'+res;
    return res;
}
long long xs(string s)
{
    long long res=0;
    bool kt=0;
    if (s[0]=='-')
    {
        kt=1;
        s.erase(0,1);
    }
    for(int i=0;i<s.length();i++) res=res*10+(s[i]-'0');
    if (kt) return -res;
    return res;
}
int main()
{
    long long n,m;
    cin>>n;
    if (n%2==0) m=n-1;
    else m=n;
    string nn=sx(n),mm=sx(m);
    string res1=tich(nn,tong(nn,"1"));
    string res2=tich(tong(mm,"1"),tong(mm,"1"));
    res1=hieu(res1,res2);
    cout<<xs(res1)/2;
	return 0;
}
