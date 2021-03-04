#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> a;
vector<int> f;
int n,s,res=1e9;
void tinh()
{
    int kq=0,sl=0;
    FORT(i,0,n) 
        if (f[i]==1) 
        {
            kq+=a[i];
            sl++;
        }
    if (kq==s&&sl<res) res=sl; 
}
void sinh(int vt,int n)
{
    if (vt>n) 
    {
        tinh();
        return;
    }
    FORT(i,0,2) 
    {
        f[vt]=i;   
        sinh(vt+1,n);
    }
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T)
    {
        cin>>n>>s;
        a.resize(n);
        f.resize(n);
        FORT(i,0,n) cin>>a[i];
        sinh(1,n);
        cout<<res;
    }
    return 0;
}