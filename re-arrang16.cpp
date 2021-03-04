#include<bits/stdc++.h>

using namespace std;

vector<int> dd;
void solve()
{
    string s;
    cin>>s;
    int i=s.length()-2;
    while (i>=0&&s[i]<=s[i+1]) i--;
    if (i<0||s.length()==1) cout<<-1<<endl;
    else
    {
        int maxx=-1;
        for(int j=i+1;j<s.length();j++)
            if ((maxx==-1)||(s[j]<s[i] && s[j]>s[maxx])) maxx=j;
        swap(s[i],s[maxx]);
        cout<<s<<endl;
    }
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}