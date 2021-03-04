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
string sx(long long a)
{
    string res="";
    while (a>0)
    {
        char c=a%10+'0';
        res=c+res;
        a/=10;
    }
    return res;
}
string mod(string a, long long b)
{
    long long so=0;
    for(int i=0;i<a.length();i++)
    {
        so=so*10+(a[i]-'0');
        if (so>=b) so%=b;
    }
    return sx(so);
}
string poww(string n, long long m, long long k)
{
    string res="1",tmp=n;
    for(long long i=m;i;i>>=1)
    {
        if (i&1) res=mod(tich(res,tmp),k);
        tmp=mod(tich(tmp,tmp),k);
    }
    return res;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string n;
        long long m,k;
        cin>>n>>m>>k;
        cout<<poww(n,m,k)<<endl;
    }
	return 0;
}
