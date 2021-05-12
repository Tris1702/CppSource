#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void prepare()
{

}

bool isChar(char c)
{
    return ((c >= 'a' && c <='z') || (c >='A' && c <='Z'));
}

void solve()
{   
    string s, tmp ="";
    stack<string> st;
    getline(cin, s);
    int i = 0;
    while (i < s.length())
    {
        while (i < s.length() && isChar(s[i])) 
        {
            tmp = tmp + s[i];
            i++;
        }
        while (i < s.length() && !isChar(s[i])) i++;
        if (tmp.length() > 0)
        {
            st.push(tmp);
            tmp ="";
        }
    }
    while (st.size())
    {
        cout << st.top() <<' ';
        st.pop();
    }
    cout << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) solve();
}