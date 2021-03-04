#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long ucln(long long a,long long b)
{
    while (b>0)
    {
        if (a>b) swap (a,b);
        b%=a;
    }
    return a;
}
long long bcnn(long long a,long long b)
{
    long long tmp=a*b;
    return tmp/ucln(a,b);
}
long long tao(int a)
{
    long long res=1;
    for(int i=2;i<=a;i++) res*=10;
    return res;
}
int scs(long long a)
{
    int dem=0;
    while (a>0)
    {
        dem++;
        a/=10;
    }
    return dem;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long x,y,z,n;
        cin>>x>>y>>z>>n;
        long long tmp=bcnn(bcnn(x,y),z);
        long long i=tao(n)/tmp;
        long long tmp2=tmp*i;
        while (scs(tmp2)<n)
        {
            i++;
            tmp2=tmp*i;
        }
        if (scs(tmp2)==n) cout<<tmp2<<endl;
        else cout<<-1<<endl;
    }
	return 0;
}
