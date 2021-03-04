#include<bits/stdc++.h>
#define mp make_pair
#define F first
#define S second
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define LL long long
using namespace std;
string hvkt(string a)
{
    vector<char> f;
    int vt=-1;
    for(int i=a.length()-1;i>0;i--)
    {
        f.push_back(a[i]);
        if (a[i]>a[i-1])
        {
            vt=i-1;
            break;
        }
    }
    if (vt==-1) return a;
    char tmp=0;
    sort(f.begin(),f.end());
    for(int i=0;i<f.size();i++)
        if (f[i]>a[vt]) 
        {
            tmp=f[i];
            break;
        }
    for(int i=a.length()-1;i>vt;i--)
        if (a[i]==tmp) 
        {
            swap (a[i],a[vt]);
            break;
        }
    for(int i=a.length()-1;i>vt;i--)
        for(int j=i-1;j>vt;j--)
            if (a[i]<a[j]) swap(a[i],a[j]);
    return a;
}

int main()
{
    int n,m;
    vector<string> a;
    cin>>n>>m;
    FORT(i,1,n)
    {
        string so;
        cin>>so;
        a.push_back(so);
    }
    FORT(i,1,m-1)
    {
        FORT(j,0,a.size()-1) a[j]=hvkt(a[j]);
    }
    string maxx=a[0];
    FORT(i,1,a.size()-1)
        if (maxx.length()<a[i].length()||(maxx.length()==a[i].length()&&maxx<a[i])) maxx=a[i];
    cout<<maxx;
	return 0;
}
