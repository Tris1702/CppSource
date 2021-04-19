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
    int res=0;
    stack <char> st;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]==')'&&st.empty()) 
        {
            res++;
            st.push('(');
            continue;
        }
        if (s[i]==')'&& (!st.empty()) &&st.top()=='(') 
        {
            st.pop();
            continue;
        }
        st.push(s[i]);   
    }
    cout<<res+(st.size()/2)<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}