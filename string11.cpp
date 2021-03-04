#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool cmp(vector<int>a , vector<int> b)
{
    FORT(i,0,26)
        if (a[i]<b[i]) return 0;
    return 1;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    vector<int> sl(26,0);
    int d=-1,c=-1,dd=1e9;
    FORT(i,0,s2.length()) sl[s2[i]-'a']++;
    for(int i=0;i<s1.length();i++)
    {
        for(int j=0;j<=i;j++)
        {
            vector<int> dem(26,0);
            for(int k=j;k<=i;k++) 
                dem[s1[k]-'a']++;
            if (cmp(dem,sl))
            {
                if (dd>i-j+1)
                {
                    d=j;
                    c=i;
                    dd=i-j+1;
                }
            }
        }
    }
    if (d==-1) cout<<-1<<endl;
    else
    {
        FORT(i,d,c+1) cout<<s1[i];
        cout<<endl;
    }
    
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}