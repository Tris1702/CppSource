#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int P[1001][1001]={};
int mod = 1e9+7;
void prepare()
{
    for(int i = 1; i <= 1000; i++) P[i][1] = i;
    for(int i = 2; i <= 1000; i++)
        for(int j = 2; j <= i; j++) 
            P[i][j] = (1LL*P[i-1][j-1]*i) % mod;
}

void init()
{

}

void solve()
{
    int n, k; 
    cin >> n >> k;
    cout << P[n][k] << endl;
}
int main()
{
    prepare();
    int t = 1;
    cin >> t;
    while (t--) solve();
}