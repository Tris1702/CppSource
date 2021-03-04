#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int n,res=0;
    cin>>n;
    vector<int> a;
    FORT(i,0,n) 
    {
        int so;
        cin>>so;
        if (so%2) a.push_back(so); 
        else res+=so;
    }
    sort(a.begin(),a.end());
    for(int i=(int)a.size()-1;i>=(!(a.size()%2));i--)
        res+=a[i];
    cout<<res;
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}