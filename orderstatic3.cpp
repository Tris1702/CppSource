#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a;
    for(int i=0;i<n*n;i++)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    cout<<a[m-1]<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}