#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int dem;
vector<vector<int> > kq;
vector<int> res;
void Try(vector<int> &a,int vt,int X)
{
    if (X<0) return;
    if (X==0)
    {
        dem++;
        kq.push_back(res);
        return;
    }
    FORT(i,vt,a.size())
    {
        res.push_back(a[i]);
        Try(a,i,X-a[i]);
        res.pop_back();
    }
}
void solve()
{
    int n,X;
    dem=0;
    kq.clear();
    res.clear();
    cin>>n>>X;
    vector<int> a(n);
    FORT(i,0,n) cin>>a[i];
    sort(a.begin(),a.end());
    Try(a,0,X);
    if (dem==0) cout<<-1;
    else
    {
        cout << dem <<' ';
        for(vector<int> res: kq)
        {
            cout<<"{";
            FORT(i,0,(int)res.size()-1) cout<<res[i]<<" ";
            cout<<res.back()<<"} ";
        }
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