#include<iostream>

using namespace std;

int x[100][100]={};
bool dd[100]={};
int V;

void dfs(int u)
{
    cout << u <<' ';
    for(int i = 1; i <= V; i++)
        if (x[u][i] && dd[i] == 0)
        {
            dd[i] = 1;
            dfs(i);
        }
}

int main()
{
    cin >> V;
    for(int i = 1; i <= V; i++)
        for(int j = 1; j <= V; j++) cin >> x[i][j];
    dd[1] = 1;
    dfs(1);
}