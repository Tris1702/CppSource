#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
void solve()
{
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0; i < s.length(); i++)
    {
        if (!(s[i] >= 'a' && s[i] <= 'z') && s[i] != ')') st.push(s[i]);
        if (s[i]== ')')
        {
            if (st.top() == '(')
            {
                cout << "Yes" << endl;
                return;
            }
            while (st.size() && st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << "No" <<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}