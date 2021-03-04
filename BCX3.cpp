#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long a[1000001]={};
void tong(string &a,string b)
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
    a=kq;
}
void tich(string &a, string b)
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
        tong(kq,res);
    }
    while (kq[0]=='0'&&kq.length()>1) kq.erase(0,1);
    a=kq;
}
string poww(string a,int b)
{
    string res="1";
    for(int i=b;i;i>>=1)
    {
        if (i&1) tich(res,a);
        tich(a,a);
    }
    return res;
}
string chuyen(string a)
{
    string res="0";
    int vt=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        if (a[i]=='1') tong(res,poww("2",vt));
        vt++;
    }
    return res;
}
int main()
{
    long long n,dem[65]={};
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=64;i>=0;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if (a[j]&1) dem[i]++;
            a[j]>>=1;
        }
    }
    string res="";
    long long nho=0;
    for(int i=64;i>=0;i--)
    {
        long long s1=dem[i],s0=n-dem[i];
        if ((s1*s0+nho)%2==0) res='0'+res;
        else res='1'+res;
        nho=(s1*s0+nho)/2;
    }
    string kq=chuyen(res);
    cout<<kq;
	return 0;
}
