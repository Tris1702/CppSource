#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long ucln(long long a,long long b)
{
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
string tao(int n,int a)
{
    string tmp="";
    while (a>0)
    {
        char c=a%10+'0';
        tmp=c+tmp;
        a/=10;
    }
    string s="";
    for(int i=1;i<=n;i++) s=s+tmp;
    return s;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s1="",s2="";
        int a,x,y;
        cin>>a>>x>>y;
        cout<<tao(ucln(x,y),a)<<endl;
    }
	return 0;
}
