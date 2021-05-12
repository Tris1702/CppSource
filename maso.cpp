#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int n;
bool dd[200]={};
vector<string> chu, cs;
void sinh(int spt,string s)
{
    if (spt>n)
    {
        chu.push_back(s);
        return;
    }
    for(char i='A';i<'A'+n;i++)
        if (!dd[i])
    {
        dd[i]=1;
        sinh(spt+1,s+i);
        dd[i]=0;
    }
}
void sinhh(int spt,string s)
{
    if (spt>n)
    {
        cs.push_back(s);
        return;
    }
    for(int i=1;i<=n;i++)
    {
        sinhh(spt+1,s+to_string(i));
    }
}
void solve()
{
    cin >> n;
    sinh(1,"");
    sinhh(1,"");
    for(int i = 0; i < chu.size(); i++)
        for(int j = 0; j < cs.size(); j++)
            cout << chu[i] << cs[j] << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}