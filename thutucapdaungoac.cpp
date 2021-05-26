#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

string chuanhoa(string s)
{
    string tmp = "";
    for(char c : s)
        if (c == '(' || c == ')') tmp = tmp + c;
    return tmp;
}

void solve()
{
    string s;
    getline(cin, s);
    s = chuanhoa(s);
    vector<int> res (s.length());
    stack<pair<int, int> > st;
    int it = 1;
    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == '(') 
        {
            st.push(mp(i, it++));
        }
        else
        {
            res[i] = res[st.top().F] = st.top().S;
            st.pop();
        }
    }
    for(int i: res) cout << i <<' ';
    cout << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) solve();
}