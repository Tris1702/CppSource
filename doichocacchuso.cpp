#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> f;
void solve()
{
    int k;
    string s;
    f.clear();
    cin>>k>>s;
    int d=0,vt=d;
    char c;
    while (k)
    {
        c='0'-1;
        if (d==s.length()) break;
        FORT(i,d+1,s.length())
        {
            if (s[i]>=c)
            {
                c=s[i];
                vt=i;
            }
        }
        if (c>s[d]) 
        {
            swap(s[d],s[vt]);
            k--;
            d++;
        }
        else d++;
    }
    while (s[0]=='0'&&s.length()>1) s.erase(0,1);
    cout<<s<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}