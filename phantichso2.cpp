#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool ok;
int dem = 0;
vector<vector<int> > kq;
vector<int> res;
void Try(vector<int> &a,int vt,int X)
{
    if (X<0) return;
    if (X==0)
    {
        dem++;
        ok=1;
        kq.push_back(res);
        return;
    }
    FORD(i,vt+1,0)
    {
        res.push_back(a[i]);
        Try(a,i,X-a[i]);
        res.pop_back();
    }
}
void solve()
{
    int n,X;
    ok=0;
    res.clear();
    kq.clear();
    dem = 0;
    cin>>n;
    X=n;
    vector<int> a(n);
    FORT(i,0,n) a[i]=i+1;
    Try(a,n-1,X);
    if (ok==0) cout<<-1;
    cout <<dem<< endl;
    for(vector<int> res: kq)
    {
        cout<<"(";
        FORT(i,0,(int)res.size()-1) cout<<res[i]<<" ";
        cout<<res.back()<<") ";
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}