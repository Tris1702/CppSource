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
string loai(string s)
{
    int i=0;
    while(i<s.length())
    {
        while (i<s.length()&&s[i]=='0') s.erase(i,1);
        i++;
    }
    return s;
}
int main()
{
    string a,b;
    cin>>a>>b;
    string c1=loai(tong(a,b));
    string c2=tong(loai(a),loai(b));
    if (c1==c2) cout<<"YES";
    else cout<<"NO";
	return 0;
}
