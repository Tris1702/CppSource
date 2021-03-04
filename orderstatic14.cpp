#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    FORT(i,0,n) cin>>a[i];
    b=a;
    sort(b.begin(),b.end());
    FORT(i,0,n)
    {
        int it=upper_bound(b.begin(),b.end(),a[i])-b.begin();
        if (it==n) cout<<"_ ";
        else cout<<b[it]<<' ';
    }
    cout<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}