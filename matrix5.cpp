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
    int n;
    cin>>n;
    int x[n][n]={};
    int sumcol[n]={},sumrow[n]={};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) 
        {
            cin>>x[i][j];
            sumcol[j]+=x[i][j];
            sumrow[i]+=x[i][j];
        }
    int maxx=0;
    for(int i=0;i<n;i++) maxx=max(maxx,max(sumrow[i],sumcol[i]));
    int res=0;
    int i=0,j=0;
    while (i<n && j<n)
    {
        int tmp=min(maxx-sumrow[i],maxx-sumcol[j]);
        res+=tmp;
        sumrow[i]+=tmp;
        sumcol[j]+=tmp;
        x[i][j]+=tmp;
        if (sumrow[i]==maxx) i++;
        if (sumcol[j]==maxx) j++;
    }
    cout<<res<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}