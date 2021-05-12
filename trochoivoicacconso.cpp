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
bool check (vector<int> &a)
{
    for(int i = 1; i < a.size(); i++)
        if (abs(a[i]-a[i-1]) == 1) return 0;
    return 1;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) a[i] = i+1;
    do
    {
        if (check(a))
        {
            for(int i: a) cout << i;
            cout << endl;
        }
    } while (next_permutation(a.begin(), a.end()));
    
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}