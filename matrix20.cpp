#include<bits/stdc++.h>

using namespace std;
int n,m,kk;
void solve()
{
    cin>>n>>m>>kk;
    int a[n][m]={};
    vector<int> b;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)cin>>a[i][j];
    int d=n,c=m,vt=0,k=0;
    while (k<n*m)
    {
        for(int j=vt;j<c;j++) 
        {
            k++;
            b.push_back(a[vt][j]);
        }
        for(int i=vt+1;i<d;i++) 
        {
            k++;
            b.push_back(a[i][c-1]);
        }
        if (k<n*m)
            for(int j=c-2;j>=vt;j--) 
            {
                k++;
                b.push_back(a[d-1][j]);
            }
        if (k<n*m)
            for(int i=d-2;i>vt;i--) 
            {
                k++;
                b.push_back(a[i][vt]);
            }
        vt++;
        d--;
        c--;
    }
    cout<<b[kk-1]<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}