#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
string divi(string a,int b)
{
    string res="";
    int so=0;
    for(int i=0;i<a.length();i++)
    {
        so=so*10+(a[i]-'0');
        res+=(so/b)+'0';
        so%=b;
    }
    while (res[0]=='0'&&res.length()>=2) res.erase(0,1);
    return res;
}
int tonum(string b)
{
    int num=0;
    FORT(i,0,b.length()) num=num*10+char(b[i]-'0');
    return num;
}
void solve()
{
    string a,b;
    cin>>a>>b;
    if (a.length()==0) a="0";
    if (b.length()==0) b="0";
    if (b=="0") 
    {
        cout<<endl;
        return;
    }
    cout<<divi(a,tonum(b))<<endl;
    
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}
