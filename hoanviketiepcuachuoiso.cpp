#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

string hvkt(string a)
{
    int vt=(int)a.length()-2;
    while (vt>=0&&a[vt]>=a[vt+1]) vt--;
    if (vt==-1) return a;
    int i=a.length()-1;
    while (a[i]<=a[vt]) i--;
    swap(a[i],a[vt]);
    int r=a.length()-1,l=vt+1;
    while (r>l)
    {
        swap(a[r],a[l]);
        r--;
        l++;
    }
    return a;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T)
    {
        int k;
        string s;
        cin>>k;
        cin>>s;
        string stmp=hvkt(s);
        cout<<k<<' ';
        if (s==stmp) cout<<"BIGGEST";
        else cout<<stmp;
        cout<<endl;
    }
    return 0;
}