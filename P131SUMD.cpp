#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string tong(string s1, string s2)
{
    string kq="";
    while (s1.length()<s2.length()) s1='0'+s1;
    while (s1.length()>s2.length()) s2='0'+s2;
    int nho=0;
    for(int i=s1.length()-1;i>=0;i--)
    {
        int tmp=(s1[i]-'0')+(s2[i]-'0')+nho;
        char c=tmp%10+'0';
        kq=c+kq;
        if (tmp>=10) nho=1; else nho=0;
    }
    if (nho==1) kq='1'+kq;
    return kq;
}
string doi1(string s)
{
    for(int i=0;i<s.length();i++)
        if (s[i]=='6') s[i]='5';
    return s;
}
string doi2(string s)
{
    for(int i=0;i<s.length();i++)
        if (s[i]=='5') s[i]='6';
    return s;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<tong(doi1(a),doi1(b))<<' '<<tong(doi2(a),doi2(b));
	return 0;
}
