#include<iostream>
#include<stack>
using namespace std;

int x[100][100]={};
bool dd[100]={};
int V;

void Try()
{
    stack<int> st;
    st.push(1);
    dd[1] = 1;
    cout << 1<<' ';
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        for(int v = 1; v <= V; v++)
            if (x[u][v] && dd[v]==0)
            {
                cout << v << ' ';
                dd[v] = 1;
                st.push(u);
                st.push(v);
                break;
            }
    }
}

int main()
{
    cin >> V;
    for(int i = 1; i <= V; i++)
        for(int j = 1; j <= V; j++) cin >> x[i][j];
    
    Try();
}