#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<string> sour;
string st, fn;
int n;
int diff(string s, string t)
{
    int dem = 0;
    for(int i = 0; i < s.length(); i++)
        if (s[i] != t[i]) dem++;
    return dem;
}

struct cmp
{
    bool operator() (pair<int,int> a,pair<int,int> b)
    {
        return a.S>b.S;
    }
};
const int oo = 1e9;
priority_queue<pair<int,int>,vector<pair<int,int> >, cmp > heap;
int dij(int s, int t)
{
    vector<int> d(n+2, oo);
    bool dd[n+2] = {};
    heap.push(mp(s, 0));
    d[s] = 0;
    while (heap.size())
    {
        int u = heap.top().F, w = heap.top().S;
        heap.pop();
        dd[u] = 1;
        if (u == t)
        {
            return w;
        }
        for(int i = 0; i < sour.size(); i++)
        {
            if (diff(sour[u], sour[i]) != 1) continue;
            if (dd[i] == 0)
            {
                int tmp = w + 1;
                d[i] = min(tmp, d[i]);
                heap.push(mp(i, d[i]));
            }
        }
    }
}
void init()
{
    sour.clear();
}

void solve()
{
    cin >> n >> st >> fn;
    init();
    sour.push_back(st);
    for(int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;
        // if (check.find(s) == check.end())
            sour.push_back(s);
        // check.insert(s);
    }
    sour.push_back(fn);
    cout << dij(0, n+1)+1 << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}