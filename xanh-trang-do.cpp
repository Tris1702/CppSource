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
    cin.ignore();
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
    {
        char c;
        cin >> c;
        if(c == 'X') a[i] = 0;
        else
            if (c == 'T') a[i] = 1;
            else a[i] = 2;
    }
    vector<int> b = a;
    sort(b.begin(), b.end());
    int dem =0;
    for(int i = 0; i <n; i++)
    {
        if (a[i] == b[i]) continue;
        dem++;
        int it = -1;
        for(int j = i+1; j < n; j++)
            if(a[j] == b[i] && a[i] == b[j])
            {
                it = j;
                break;
            }
        if (it == -1)
        {
            for(int j = i+1; j < n; j++)
            if(a[j] == b[i] && a[j] != b[j])
            {
                it = j;
                break;
            }
        }
        swap(a[i], a[it]);
        // for(int i: a) cout << i << ' ';
        // cout << endl;
    }
    cout << dem;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}