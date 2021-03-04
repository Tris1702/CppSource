#include <iostream>
#include<math.h>

using namespace std;
int F[105]={};

bool kt(int x)
{
    if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++)
        if (x%i==0) return 0;
    return 1;
}
int tcs(int x)
{
    int tong=0;
    while (x>0)
    {
        tong+=x%10;
        x/=10;
    }
    return tong;
}
long long f(long long x)
{
    if (F[x]!=-1) return F[x];
    if (kt(x)) return tcs(x);
    long long res=1;
    for(int i=2;i<x;i++)
        if (x%i==0)
    {
        if (F[i]==-1) F[i]=f(i);
        res*=F[i];
    }
    return res;
}
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<=100;i++) F[i]=-1;
    F[1]=1;
    cout<<f(x);
    return 0;
}
