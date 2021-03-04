#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

bool cmp(string a,string b)
{
    if (a[0]<b[0]) return 1;
    if (a[0]==b[0]&&a.length()<b.length()) return 1;
    return 0;
}
int main()
{
    string s;
    vector<string> f;
    while (cin>>s)
        f.push_back(s);
    sort(f.begin(),f.end(),cmp);
    FORT(i,0,f.size()-1) cout<<f[i]<<' ';
	return 0;
}
