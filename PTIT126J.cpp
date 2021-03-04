#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    long long sum=0,n,m;
    cin>>n>>m;
    long long a[n+1]={},b[n+1]={};
    FORT(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    FORT(i,1,n)
        b[i]=b[i-1]+a[i];
    if (b[n]==m)
    {
        cout<<a[n];
        return 0;
    }
    FORT(i,0,n-1)
    {
        sum=b[i];
        long long h=(b[n]-b[i]-m)/(n-i);
        if (h<=a[i+1])
        {
            cout<<h;
            return 0;
        }
    }
    return 0;
}
