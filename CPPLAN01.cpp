#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string hieu(string a,string b)
{
    string kq="";
    while (a.length()<b.length()) a='0'+a;
    while (a.length()>b.length()) b='0'+b;
    if (a<b)
    {
        string tmp=a;
        a=b;
        b=tmp;
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
        cout<<hieu(s1,s2)<<endl;
    }
	return 0;
}
