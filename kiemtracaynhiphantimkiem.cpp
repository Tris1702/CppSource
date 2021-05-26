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
    set<int> s;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int so;
        cin >> so;
        a.push_back(so);
        s.insert(so);
    }
    int i =0;
    for(set<int> ::iterator it = s.begin(); it != s.end(); it++, i++) 
    {
        if (*it != a[i]) 
        {
            cout << 0 << endl;
            return;
        }
    }
    cout <<1<< endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}