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
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s1,s2;
        cin>>s1>>s2;
        cout<<tong(s1,s2)<<endl;
    }
	return 0;
}
