#include<bits/stdc++.h>

using namespace std;
int doi(char c)
{
    if (c=='(') return 0;
    if (c=='O') return 16;
    if (c=='C') return 12;
    if (c=='H') return 1;
}
int xuli(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]!=')'&&s[i]<'0'&&s[i]>'9') st.push(doi(s[i]));
        if (s[i]==')')
        {
            int tong=0;
            while (st.top()!=0)
            {
                int tmp=st.top();
                st.pop();
                tong+=tmp;
            }
            st.pop();
            st.push(tong);
        }
        if (s[i]>='0'&&s[i]<='9')
        {
            int tmp=st.top();
            st.pop();
            st.push(tmp*(s[i]-'0'));
        }
    }
    return st.top();
}
int main()
{
    string s;
    cin>>s;
    cout<<xuli(s);
    return 0;
}
