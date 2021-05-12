#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

const pair<int,int> b[8] = {mp(-2, 1), mp(-1, 2), mp(1, 2), mp(2, 1), mp(2, -1), mp(1, -2), mp(-1, -2), mp(-2, -1)};
pair<int, int> st, fn;
int bfs()
{
    bool dd[9][9] = {};
    queue<pair<pair<int,int> , int> > q;
    q.push(mp(st,0));
    dd[st.F][st.S] = 1;
    while(!q.empty())
    {
        pair<int,int> u = q.front().F;
        int way = q.front().S;
        q.pop();
        if (u == fn) return way;
        for(int i = 0; i < 8; i++)
        {
            pair<int,int> v = mp(u.F + b[i].F, u.S + b[i].S);
            if (v.F > 0 && v.F < 9 && v.S > 0 && v.S < 9 && !dd[v.F][v.S])
            {
                dd[v.F][v.S] = 1;
                q.push(mp(v, way+1));
            }
        }
    }
}
void solve()
{
    string s;
    cin >> s;
    st.F = s[0]-'a'+1; st.S = s[1]-'0';
    cin >> s;
    fn.F = s[0]-'a'+1; fn.S = s[1]-'0';
    cout << bfs() << endl; 
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}
