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
    vector<vector<int> > x(n);
    for(int i =0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int so;
            cin >> so;
            if (so) x[i].push_back(j+1);
        }
    for(int i = 0; i < n; i++) 
    {
        for(int j: x[i]) cout << j << ' ';
        cout << endl;
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}