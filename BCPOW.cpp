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
int main()
{
    int n,m;
    cin>>n>>m;
    string res1="1",res2="1";
    for(int i=1;i<=n;i++)
        res1=tong(res1,res1);
    for(int i=1;i<=m;i++)
    {
        string tmp=res2;
        res2=tong(tong(res2,res2),tmp);
    }
    string s=tong(res1,res2);
    cout<<s[0];
	return 0;
}
