#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> tohopkt(vector<int> a,int n)
{
    int trc=n+1,vt=a.size()-1;
    while (a[vt]==trc-1) 
    {
        trc=a[vt];
        vt--;
    }
    if (vt<0)
        FORT(i,0,a.size()) a[i]=i+1;
    else
    {
        bool dd[n+1]={};
        a[vt]=a[vt]+1;
        FORT(i,0,vt+1) dd[a[vt]]=1;
        FORT(i,vt+1,a.size())
            FORT(j,a[i-1]+1,n+1) 
                if (dd[j]==0)
                {
                    a[i]=j;
                    dd[j]=1;
                    break;
                }
    }
    return a;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T)
    {
        int n,k;
        cin>>n>>k;
        vector<int> f(k);
        FORT(i,0,k) cin>>f[i];
        f=tohopkt(f,n);
        FORT(i,0,k) cout<<f[i]<<' ';
        cout<<endl;
    }
    return 0;
}