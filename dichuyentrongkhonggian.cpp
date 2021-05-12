#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
struct point
{
    int x,y,z;
    bool equal(point a)
    {
        return this->x == a.x && this->y == a.y && this->z == a.z;
    }
};
int x, y, z;
vector<vector<vector<int> > > a; 
point st, fn;
point direct[6]= {{0, 1, 0}, {0, -1, 0}, {0, 0, -1}, {0, 0, 1}, {1, 0, 0}, {-1, 0 ,0} };
void init()
{
    a.clear();
    a.resize(x+1);
}
int bfs()
{
    bool dd[x+1][y+1][z+1] = {};
    queue<pair<point, int> > q;
    q.push(mp(st, 0));
    dd[st.x][st.y][st.z] = 1;
    while (!q.empty())
    {
        point u = q.front().F;
        int way = q.front().S;
        q.pop();
        if (u.equal(fn)) return way;
        for(int i = 0; i < 6; i++)
        {
            point v = {u.x + direct[i].x, u.y + direct[i].y, u.z + direct[i].z};
            if (v.x > 0 && v.x <= x && v.y > 0 && v.y <= y && v.z > 0 && v.z <= z && !dd[v.x][v.y][v.z] && a[v.x][v.y][v.z])
            {
                dd[v.x][v.y][v.z] = 1;
                q.push(mp(v, way+1));
            }
        }
    }
    return -1;
}

void solve()
{
    cin >> x >> y >> z;
    init();
    for(int i = 1; i <= x; i ++)
    {
        a[i].resize(y+1);
        for(int j = 1; j <= y; j++)
        {
            a[i][j].resize(z+1);
            for(int k = 1; k <= z; k++)
            {
                char c;
                cin >> c;
                if (c == '#') a[i][j][k] = 0;
                else a[i][j][k] = 1;
                if (c == 'S') st = {i,j,k};
                if (c == 'E') fn = {i,j,k};
            }
        }
    }
    cout << bfs() << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}