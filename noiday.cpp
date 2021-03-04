#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    priority_queue<long long,vector<long long>, greater< long long > > q;
    int n;
    long long res=0;
    cin>>n;
    FORT(i,0,n)
    {
        long long so;
        cin>>so;
        q.push(so);
    }
    while (q.size()>1)
    {
        long long a=q.top();
        q.pop();
        a+=q.top();
        q.pop();
        q.push(a);
        res+=a;
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}