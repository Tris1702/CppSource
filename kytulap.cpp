#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int n, res = 1e9;
vector<string> sour;
bool dd[100]={};
int check(string s1, string s2)
{
    int it1 = 0, it2 = 0, lap = 0;
    while (it1 < s1.length() && it2 < s2.length())
    {
        if (s1[it1] == s2[it2]) 
        {
            lap++;
            it1++; it2++;
            continue;
        }
        if (s1[it1] > s2[it2]) it2++;
        else it1++;
    }
    return lap;
}
void reorder(int vt, int lap, int truoc)
{
    if (lap >= res) return;
    if (vt > n) 
    {
        res = min(res, lap);
        return;
    } 
    for(int i = 1; i <= n; i++)
    {
        if (dd[i] == 1) continue;
        dd[i] = 1;
        reorder(vt+1, lap+check(sour[truoc], sour[i]), i);
        dd[i] = 0;
    }
}
void solve()
{
    cin >> n;
    sour.push_back("");
    for(int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        sour.push_back(s);
    }
    reorder(1, 0, 0);
    cout << res;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}