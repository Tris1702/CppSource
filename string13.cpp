#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    int k;
    cin>>s>>k;
    int f[s.length()][26]={0};
    for(int i=0;i<s.length();i++)
    {
        if (i>0)
            for(int j=0;j<26;j++) f[i][j]=f[i-1][j];
        f[i][s[i]-'a']++;
    }
    int res=0;
    for(int i=0;i<s.length();i++)
        for(int j=i+k-1;j<s.length();j++)
        {
            int sl=0;
            if (i==0) 
            {
                for(int k=0;k<26;k++) 
                    if (f[j][k]>0) sl++;
            }
            else
            {
                for(int k=0;k<26;k++)
                    if (f[j][k]-f[i-1][k]>0) sl++;
            }
            if (sl==k) res++;
        }
    cout<<res<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}