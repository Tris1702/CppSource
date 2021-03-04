#include<bits/stdc++.h>

using namespace std;
int n,m;
void solve()
{
    cin>>n>>m;
    int a[n][m]={};
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)cin>>a[i][j];
    int b[n*m]={};
    int d=n,c=m,vt=0,k=0;
    while (k<n*m)
    {
        for(int j=vt;j<c;j++) 
            b[k++]=a[vt][j];
        for(int i=vt+1;i<d;i++) 
            b[k++]=a[i][c-1];
        if (k<n*m)
            for(int j=c-2;j>=vt;j--) 
                b[k++]=a[d-1][j];
        if (k<n*m)
            for(int i=d-2;i>vt;i--) 
                b[k++]=a[i][vt];
        vt++;
        d--;
        c--;
    }
    for(int i=0;i<n*m;i++)cout<<b[i]<<' ';
    cout<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}