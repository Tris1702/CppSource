#include<bits/stdc++.h>

using namespace std;
bool kt(int a,int b)
{
    if (a<0) a=-a;
    if (b<0) b=-b;
    return a>b;
}
void solve()
{
    int n,res;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    res=a[0]+a[1];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            int tmp=a[i]+a[j];
            if (kt(res,tmp)) res=tmp; 
        }
    cout<<res<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}