#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
#define endl '\n'
using namespace std;

typedef long long ll;

void prepare()
{

}

struct diem
{
    int gt, pos, rpos;
};

bool cmp1(diem a, diem b)
{
    return (a.gt < b.gt) || (a.gt == b.gt && a.pos < b.pos);
}
bool cmp2(diem a, diem b)
{
    return a.pos < b.pos;
}
void solve()
{
    int n;
    cin >> n;
    vector<diem> a(n);
    vector<int> res;
    for(int i = 0; i<n ;i++) 
    {
        cin >> a[i].gt;
        a[i].pos = i;
    }
    sort(a.begin(), a.end(), cmp1);
    for(int i = 0; i <n; i++) a[i].rpos = i+1;
    sort(a.begin(), a.end(), cmp2);
    int maxx = 0;
    for(int i = 0; i < n-1 ; i++)
    {
        maxx = max(maxx, a[i].rpos);
        if (i+1 == maxx) res.push_back(i+1);
    }
    cout << res.size() << endl;
    for(int i: res) cout << i <<' ';
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--) solve();
}