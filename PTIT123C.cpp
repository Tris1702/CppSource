#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if (a.F<b.F||(a.F==b.F&&a.S<b.S)) return 1;
    return 0;
}
bool cmp1(pair<int,int> a,pair<int,int>b)
{
    return (a.S<b.S);
}
bool cmp2(pair<int,int> a,pair<int,int>b)
{
    return (a.S>b.S);
}
int main()
{
    int n,k1,k2,t=0;
    while (cin>>n>>k1>>k2)
    {
        vector<pair<int,int> >f(n);
        if (n==k1&&k1==k2) return 0;
        FORT(i,0,n-1)
        {
            cin>>f[i].F;
            f[i].S=i;
        }
        sort(f.begin(),f.end(),cmp);
        sort(f.begin(),f.begin()+k1,cmp1);
        sort(f.end()-k2,f.end(),cmp2);
        t++;
        cout<<"Case "<<t<<endl;
        FORT(i,0,k1-1)
            cout<<f[i].S+1<<' ';
        cout<<endl;
        FORT(i,n-k2,n-1)
            cout<<f[i].S+1<<' ';
        cout<<endl;
    }
	return 0;
}
