#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long mod(string a, long long b)
{
    long long tmp=0;
    for(int i=0;i<a.length();i++)
    {
        tmp=tmp*10+(a[i]-'0');
        if (tmp>=b) tmp%=b;
    }
    return tmp;
}
long long ucln(string s, long long b)
{
    long long a=mod(s,b);
    while (a>0)
    {
        if (a<b)
        {
            long long tmp=a;
            a=b;
            b=tmp;
        }
        a%=b;
    }
    return b;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long a;
        string b;
        cin>>a>>b;
        cout<<ucln(b,a)<<endl;
    }
	return 0;
}
