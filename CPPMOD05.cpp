#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long mod(string a,long long b)
{
    long long tmp=0;
    for(int i=0;i<a.length();i++)
    {
        tmp=tmp*10+(a[i]-'0');
        if (tmp>b) tmp%=b;
    }
    return tmp;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string n;
        long long m;
        cin>>n>>m;
        cout<<mod(n,m)<<endl;
    }
	return 0;
}
