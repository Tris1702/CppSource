#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
map<ll,ll> tanso;
void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) 
    {
        ll so;
        cin >> so;
        for(ll i = 2; i <= sqrt(so); i++)
            while (so %i == 0)
            {
                tanso[i] ++;
                so/=i;    
            }
        if (so > 1) tanso[so]++;
    }
    vector<int> res;
    for(int t = 1; t <= m ;t++)
    {
        bool check = 1;
        map<ll,ll> tansotmp = tanso;
        for(int i = 0; i < n; i++)
        {
            ll so; 
            cin >> so;
            for(ll j = 2; j <= sqrt(so); j++)
                while (so % j == 0)
                {
                    if (tansotmp[j] == 0) 
                    {
                        check = 0;
                    }
                    tansotmp[j]--;
                    so /= j;
                }
            if(so > 1)
            {
                if(tansotmp[so] == 0) check = 0;
                else tansotmp[so] --;
            }
        }
        if (check) res.push_back(t);
    }
    cout << res.size()<<endl;
    for(int i: res) cout << i << ' ';
}
int main()
{
    solve();
}