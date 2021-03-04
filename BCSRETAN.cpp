#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string chuyen(string s)
{
    for(int i=0;i<s.length();i++)
        if (s[i]=='0') s[i]='4';
        else s[i]='7';
    return s;
}
string doi(long long n, int len)
{
    string s="";
    while (n>0)
    {
        char c=n%2+'0';
        s=c+s;
        n/=2;
    }
    while (s.length()<len) s='0'+s;
    return s;
}
int main()
{
    long long k;
    cin>>k;
    long long i=0,luu=1;
    int n=0;
    while (i<k)
    {
        luu*=2;
        i+=luu;
        n++;
    }
    cout<<chuyen(doi(k-(i-luu)-1,n));
	return 0;
}
