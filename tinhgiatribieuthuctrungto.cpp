#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string OP="+-*/^";
bool Op(char c)
{
    for(int i=0;i<OP.length();i++)
        if (OP[i]==c) return 1;
    return 0;
}
int Deg(char c)
{
    switch (c)
    {
        case '^':
            return 50;
        case '*':
        case '/':
            return 100;
        case '+':
        case '-':
            return 200;
        default:
            return 1000;
    }
}
string toPost(string s)
{
    string res="";
    stack<char> st;
    st.push('#');
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='(')
        {
            st.push(s[i]);
            continue;
        }
        if (s[i]==')')
        {
            while (st.top()!='(')
            {
                res=res+st.top();
                st.pop();
            }
            st.pop();
            continue;
        }
        if (Op(s[i]))
        {
            while (Deg(st.top())<=Deg(s[i]))
            {
                res=res+st.top();
                st.pop();
            }
            st.push(s[i]);
            continue;
        }
        int so=0;
        bool ok=0;
        while (i<s.length() && s[i]!='(' && s[i]!=')' && (!Op(s[i])))
        {
            int ss=s[i]-'0';
            i++;
            so=so*10+ss;
            ok=1;
        }
        if (ok) i--;
        res=res+(char)so;
    }
    while (st.top()!='#')
    {
        res=res+st.top();
        st.pop();
    }
    return res;
}
int tinh(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        int tmp=(int) s[i];
        if (!Op(s[i])) st.push(tmp);
        else
        {
            int tmp1=st.top();
            st.pop();
            int tmp2=st.top();
            st.pop();
            if (s[i]=='+') st.push(tmp2+tmp1);
            if (s[i]=='-') st.push(tmp2-tmp1);
            if (s[i]=='*') st.push(tmp2*tmp1);
            if (s[i]=='/') st.push(tmp2/tmp1);
        }
    }
    return st.top();
}
void solve()
{
    string s;
    cin>>s;
    cout<<tinh(toPost(s))<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}