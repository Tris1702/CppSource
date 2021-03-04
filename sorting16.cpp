#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if ((a.S>b.S)||(a.S==b.S&&a.F<b.F)) return 1;
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int> > a;
    vector<int> dd(1e5+5,0);
    FORT(i,0,n) 
    {
        int so;
        cin>>so;
        if (dd[so]==0) a.push_back(mp(so,0)); 
        dd[so]++;
    }
    FORT(i,0,n) a[i].S=dd[a[i].F];
    sort(a.begin(),a.end(),cmp);
    FORT(i,0,a.size()) 
        FORT(j,0,a[i].S) cout<<a[i].F<<' ';
    cout<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}