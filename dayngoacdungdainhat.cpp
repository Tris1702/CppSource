#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    string s;
    cin>>s;
    stack <pair<char,int> > st;
    int res=0;
    vector<int> F(s.length(),0);
    for(int i=0;i<s.length();i++)
    {
        if (s[i]==')'&&!st.empty()&&st.top().F=='(')
        {
            F[i]=F[i-1];
            if (st.top().S!=0) F[i]+=F[st.top().S-1];
            F[i]+=2;
            st.pop();
        }
        else st.push(mp(s[i],i));
    }
    for(int i=0;i<s.length();i++) res=max(res,F[i]);
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}