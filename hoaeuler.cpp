#include<bits/stdc++.h>

using namespace std;
int n, st;
int x[100][100]={};
void Euler(int u)
{
    stack<int> st, ce;
    st.push(u);
    while (!st.empty())
    {
        int s = st.top();
        bool ok = false;
        for(int i = 1; i <=n; i++)
        {
            if (x[s][i] == 1)
            {
                st.push(i);
                x[s][i] = x[i][s] = 0;
                ok = true;
                break;
            }
        }
        if (ok == false)
        {
            st.pop();
            ce.push(s);
        }
    }
    while (!ce.empty())
    {
        cout << ce.top() <<' ';
        ce.pop();
    }
}

int main()
{
    cin >> n >> st;
    for(int i = 1; i <=n; i++)
        for(int j = 1; j <= n; j++)
            cin >> x[i][j];
    Euler(st);
    return 0;
    
}
