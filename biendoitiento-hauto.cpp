#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
bool isOp(char c)
{
    switch (c)
        case '+':
        case '-':
        case '/':
        case '*':
            return 1;
    return 0;
}
void solve()
{
    string s;
    stack <string> st;
    cin >> s;
    for(int i = s.length()-1; i>=0; i--)
    {
        if (isOp(s[i]))
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            st.push(s1+s2+s[i]);
        }
        else 
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
    }
    cout <<st.top()<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}