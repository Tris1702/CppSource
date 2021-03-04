#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int toNum(string s)
{
    int res=0;
    for(int i=0;i<s.length();i++)
    {
        res=res*10+(s[i]-'0');
    }
    return res;
}
string mul (string s, int hs)
{
    string res=s;
    for(int i=1;i<hs;i++)
        res+=s;
    return res;
}
bool Var (char c)
{
    return (c>='a'&&c<='z');
}
bool Num (char c)
{
    return (c>='0'&&c<='9');
}
void solve()
{
    string s;
    cin>>s;
    stack<char> st;
    st.push('#');
    for(int i=0;i<s.length();i++)
    {
        if (Var(s[i])||s[i]=='['||Num(s[i]))
        {
            st.push(s[i]);
            continue;
        }
        if (s[i]==']')
        {
            string heso="";
            string tmp="";
            while (!st.empty() && st.top()!='[')
            {
                tmp=st.top()+tmp;
                st.pop();
            }
            st.pop();
            while (Num(st.top()))
            {
                heso=st.top()+heso;
                st.pop();
            }
            tmp=mul(tmp,toNum(heso));
            for(int j=0;j<tmp.length();j++) st.push(tmp[j]);
        }
    }
    string res="";
    while (st.top()!='#')
    {
        res=st.top()+res;
        st.pop();
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