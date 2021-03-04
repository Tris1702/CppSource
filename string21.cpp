#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s,chu;
    cin>>s;
    int tcs=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]>='0'&&s[i]<='9') 
        {
            tcs=tcs+(s[i]-'0');
            continue;
        }
        chu=chu+s[i];
    }
    sort(chu.begin(),chu.end());
    cout<<chu<<tcs<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}