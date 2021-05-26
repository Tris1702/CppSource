#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

struct dat
{
    string conf;
    int a;
};
vector<dat> way;
vector<int> a;
int sum = 0;
dat tinh(string s)
{
    dat x = {s, 0};
    for(char c: x.conf)
        if (c == '1') x.a++;
    return x;
}
void sinh(int spt,string s, int n)
{
    if (spt>n)
    {
        way.push_back(tinh(s));
        return;
    }
    for(char i = '0'; i <= '1'; i++)
    {
        sinh(spt+1, s+i, n);
    }
}

int BS(int l, int r, dat x)
{
    if (l > r) return -1;
    int mid = (l+r) / 2;
    if (way[mid].a + x.a == sum*2 - (way[mid].a + x.a)) return mid;
    if (way[mid].a + x.a > sum*2 - (way[mid].a + x.a)) return BS(l, mid -1, x);
    return BS(mid + 1, r, x);
}
bool cmp(dat a, dat b)
{
    return a.a < b.a;
}
void solve()
{
    int n;
    cin >> n; // n chan
    a.resize(n);
    for(int i = 0; i <n; i++) 
    {
        cin >> a[i];
        sum += a[i];
    }
    sinh(1, "", n/2);
    sort(way.begin(), way.end(), cmp);
    for(int i =0; i < n; i++)
    {
        cout << way[i].conf <<"--" << way[i].a << endl;
    }
    for(int i = 0; i < n; i++) 
        if (BS(0, i-1, way[i]) != -1) 
        {
            cout << "YES\n";
            return;
        }
        else
            if (BS(i+1, n-1, way[i]) != -1)
            {
                cout << "YES\n";
                return;
            }
    cout << "NO\n";
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}