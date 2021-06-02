#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int res = 0;
    stack<char> st;
    for(char c: s)
    {
        if (st.empty() || c == '(')
        {
            st.push(c);
            continue;
        }
        if (st.top() == '(')
        {
            st.pop();
            res += 2;
        }
    }
    bool ok = 0;
    while (!st.empty())
    {
        if (st.top() == '(') 
        {
            if (ok) 
            {
                res += 2;
                ok = 0;
            }
            st.pop();
        }
        else
        {
            ok = 1;
            st.pop();
        }
    }
    cout << res <<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}