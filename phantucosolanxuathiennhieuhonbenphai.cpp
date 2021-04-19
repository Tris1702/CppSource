#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin>>n;
    int a[n]={};
    map<int, int> ts;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    stack <int> st;
    int g[n]={};
    for(int i = 0; i < n; i++)
    {
        if (st.empty()) st.push(i);
        else
        {
            while (st.size() && ts[a[st.top()]] < ts[a[i]])
            {
                g[st.top()] = a[i];
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
    
    for(int i = 0; i<n; i++)
    {
        cout << g[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}