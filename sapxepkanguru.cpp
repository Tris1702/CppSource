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
    for(int &i :a) cin >> i;
    sort(a.begin(), a.end());
    int it1 = n/2-1, it2 = n-1;
    int dem = n;
    while (it1 >= 0 && it2 >= n/2)
    {
        if (a[it2] >= a[it1] * 2) 
        {
            dem--;
            it1--; it2 --;
        }
        else it1 --;
    }
    cout << dem << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}