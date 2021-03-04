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
string tcs(string s)
{
    string res="0";
    for(int i=0;i<s.length();i++)
    {
        string tmp="";
        tmp=tmp+s[i];
        res=tong(res,tmp);
    }
    return res;
}
int main()
{
    string s;
    int res=0;
    cin>>s;
    while (s.length()>1)
    {
        s=tcs(s);
        res++;
    }
    cout<<res;
	return 0;
}
