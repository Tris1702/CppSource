#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
unsigned long long poww(unsigned long long a,int b)
{
    unsigned long long res=1;
    for(int i=b;i;i>>=1)
    {
        if (i&1) res*=a;
        a*=a;
    }
    return res;
}
int main()
{
    int n;
    unsigned long long a=7;
    cin>>n;
    int vt=4;
    cout<<1<<' '<<a<<endl;
    FORT(i,2,n)
    {
        a+=poww(2,vt);
        a<<=1;
        a+=1;
        vt+=2;
        cout<<i<<' '<<a<<' '<<poww(2,2*(i+1))-1-poww(2,i+2)<<endl;
    }
	return 0;
}
