#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n,k;
vector<int> a;
vector<vector<int> >luu;
void kt()
{
    int dem=0,res=0;
    for(int i=1;i<=n;i++) 
    {
        if (a[i]==1) 
        {
            if (dem==k) res++;
            dem=0;
        }
        else dem++;
    }
    if (dem==k) res++;
    if (res==1) luu.push_back(a);
}
void sinh()
{
    while (1)
    {
        for(int i=n;i>=0;i--)
        {
            if (i==0) return;
            if (a[i]==1) a[i]=0;
            else 
            {
                a[i]=1;
                kt();
                break;
            }
        }
    }
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T)
    {
        cin>>n>>k;
        a.resize(n+1,0);
        sinh();
        cout<<luu.size()<<endl;
        for(int i=0;i<luu.size();i++)
        {
            for(int j=1;j<luu[i].size();j++) 
                if (luu[i][j]==0) cout<<'A';
                else cout<<'B';
            cout<<endl;
        }
    }
    return 0;
}