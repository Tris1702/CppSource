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
    vector<int> a(n);
    for(int &i: a) cin >> i;
    sort(a.begin(), a.end());
    cout << a[(n-1)/2]<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}