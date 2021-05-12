#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void prepare()
{

}

void init()
{

}

void solve()
{
    int n;
    cin >> n;
    stack<int> st;
    vector<int> a(n+1), res(n, n);
    a[n] = -1;
    for(int i = 0; i < n; i++) cin >> a[i];
    st.push(0);
    for(int i = 1; i < n; i++)
    {
        while (!st.empty() && a[i] > a[st.top()])
        {
            res[st.top()] = i; 
            st.pop();
        }
        st.push(i);
    }
    for(int i: res)
        cout << a[i] <<' ';
    cout << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}