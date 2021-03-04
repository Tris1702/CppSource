#include<bits/stdc++.h>
#define FORT(i,a,b) for(long long i=a;i<=b;i++)
#define FORD(i,a,b) for(long long i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<long long> a;
long long kq=1e9;
long long n,k,sum=0,maxx=0;
bool kt(long long x)
{
    long long res=0,tmp=0,phan=0;
    FORT(i,0,a.size()-1)
    {
        if (tmp+a[i]>x)
        {
            res=max(res,tmp);
            tmp=0;
            phan++;
        }
        tmp+=a[i];
    }
    res=max(res,tmp);
    phan++;
    if (phan==k) kq=min(kq,res);
}
void bs(long long l,long long r)
{
    if (l>r) return;
    long long mid=(l+r)/2;
    if (kt(mid)) bs(l,mid-1);
    else bs(mid+1,r);
}
int main()
{
    cin>>n>>k;
    FORT(i,1,n)
    {
        long long so;
        cin>>so;
        a.push_back(so);
        sum+=so;
        maxx=max(maxx,so);
    }
    bs(maxx,sum);
    cout<<kq;
	return 0;
}
