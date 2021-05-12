#include<bits/stdc++.h>

using namespace std;

int n,s;
vector<vector<int> > a;
vector<int> x;
vector<bool> Free;

void Print()
{
    cout << s << ' ';
    for(int u: x)
        cout << u <<' ';
    cout << s << endl;
}
void find(int u)
{
    for(int v = 1; v <= n; v++)
    {
        if (a[u][v] == 0) continue;
        if (x.size() == n-1 && v == s)
        {
            Print();
            return;
        }
        if (Free[v] == 0) continue;
        x.push_back(v);
        Free[v] = 0;
        find(v);
        Free[v] =1 ;
        x.pop_back();
    }
}
void init()
{
    a.clear();
    a.resize(n+1, vector<int> (n+1));
    Free.clear();
    Free.resize(n+1, 1);
    x.clear();
    x.resize(0);
}
int solve()
{
    cin >> n >> s;
    init();
    for(int i =1 ; i <=n ;i++)  
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    Free[s] = 0;
    find(s);
}
int main()
{
    solve();
    return 0;
}
