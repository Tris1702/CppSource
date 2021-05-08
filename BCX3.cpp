#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long a[1000001]={};
void biton(long long &a)
{
    a=a|1;
}
int main()
{
    long long n,dem[65]={};
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=63;i>=0;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if (a[j]&1) dem[i]++;
            a[j]>>=1;
        }
    }
    string res="";
    long long nho=0;
    for(int i=63;i>=0;i--)
    {
        long long s1=dem[i],s0=n-dem[i];
        if ((s1*s0+nho)%2==0) res='0'+res;
        else res='1'+res;
        nho=(s1*s0+nho)/2;
    }
    long long kq=0;
    for(int i=0;i<res.length();i++)
    {
        kq<<=1;
        if (res[i]=='1') biton(kq);
    }
    cout<<kq;
	return 0;
}
