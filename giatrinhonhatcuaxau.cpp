#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
typedef long long LL;
void solve()
{
    int k;
    string s;
    map<char,int> m;
    cin>>k>>s;
    priority_queue <int> f;
    for(int i=0;i<s.length();i++)
        if (s[i]>='a'&&s[i]<='z') s[i]-=('a'-'A');
    for(int i=0;i<s.length();i++) m[s[i]]++;
    for(int i=0;i<s.length();i++)
    {
        if (m[s[i]]>0) 
        {
            f.push(m[s[i]]);
            m[s[i]]=0;
        }
    }
    LL res=0;
    while (k)
    {
        if (f.top()==0) break;
        int tmp=f.top();
        f.pop();
        tmp--;
        k--;
        f.push(tmp);
    }
    while (!f.empty())
    {
        LL tmp=f.top();
        res=tmp*tmp+res;
        f.pop();
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}