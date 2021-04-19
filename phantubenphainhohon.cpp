#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin>>n;
    int a[n]={};
    for(int i = 0; i < n; i++) cin >> a[i];
    stack <int> st;
    int g[n]={}, s[n]={};
    for(int i = 0; i < n; i++)
    {
        if (st.empty()) st.push(i);
        else
        {
            while (st.size() && a[st.top()] < a[i])
            {
                g[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while (st.size())
    {
        g[st.top()] = -1;
        st.pop();
    }
    
    for( int i = 0; i < n; i++)
    {
        if (st.empty()) st.push(i);
        else
        {
            while (st.size() &&  a[st.top()] > a[i])
            {
                s[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while (st.size())
    {
        s[st.top()] = -1;
        st.pop();
    }
    for(int i = 0; i<n; i++)
    {
        if(g[i] == -1) cout << -1;
        else
        {
            if (s[g[i]]== -1) cout << -1;
            else cout<<a[s[g[i]]];
        }
        cout << ' ';
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}