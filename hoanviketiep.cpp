#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> a;
void hvkt()
{
    int vt=(int)a.size()-2;
    while (vt>=0&&a[vt]>=a[vt+1]) vt--;
    if (vt==-1) vt=-1;
    int i=a.size()-1;
    if (vt>-1)
    {
        while (a[i]<=a[vt]) i--;
        swap(a[i],a[vt]);
    }
    int r=a.size()-1,l=vt+1;
    while (r>l)
    {
        swap(a[r],a[l]);
        r--;
        l++;
    }
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T)
    {
        int n;
        cin>>n;
        a.clear();
        a.resize(n);
        FORT(i,0,n) cin>>a[i];
        hvkt();
        FORT(i,0,n) cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}