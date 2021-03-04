#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool dd[100005]={};
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return ((a.F<b.F)||(a.F==b.F&&a.S<b.S));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> a;
    FORT(i,1,n)
    {
        int so;
        cin>>so;
        a.push_back(so);
        dd[so]=1;
    }
    sort(a.begin(),a.end());
    vector<pair<int,int> > luu;
    FORT(i,0,n-1)
    {
        if (a[i]==0) continue;
        FORT(j,i+1,n-1)
        {
            if (a[j]==0) continue;
            if (a[i]+a[j]<1e5&&dd[a[i]+a[j]]) luu.push_back(mp(a[i],a[j]));
        }
    }
    sort(luu.begin(),luu.end(),cmp);
    FORT(i,0,(int)luu.size()-1)
        if (i==0||luu[i]!=luu[i-1]) cout<<luu[i].F<<' '<<luu[i].S<<'\n';
	return 0;
}
