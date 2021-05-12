#include<bits/stdc++.h>

using namespace std;
int V, x[100][100]={};
bool dd[100]={};
void dfs(int u)
{
    dd[u] = 1;
    for(int v = 1; v <= V; v++)
        if (dd[v] == 0 && x[u][v] == 1) dfs(v);
}
void solve()
{
    cin >> V;
    for(int i = 1; i <= V; i++)
        for(int j = 1; j <= V; j++) cin >> x[i][j];
    for(int i = 1; i <= V; i++)
        for(int j = i+1; j <= V; j++)
            if (x[i][j] == 1)
            {
                for(int k = 1; k<=V; k++) dd[k] =0;
                x[i][j] =0;
                x[j][i] =0;
                int dem = 0;
                for(int k = 1; k<= V; k++)
                    if (dd[k] == 0) 
                    {
                        dfs(k);
                        dem++;
                    }
                if(dem > 1) cout << i <<' '<<j<<endl; 
                x[i][j] = 1;
                x[j][i] = 1;
            }
}
int main()
{
    solve();
    return 0;
}
