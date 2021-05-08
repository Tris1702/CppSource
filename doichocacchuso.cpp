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
    int k;
    string s;
    cin >> k >> s;
    while (k > 0)
    {
        int d = 0, c = s.length()-1, tmp = c;
        while (d < c && s[d+1] <= s[d]) d++;
        if (d == c) break;
        while (c > d)
        {
            if (s[c] > s[tmp]) tmp = c;
            c--;
        }
        d = 0;
        while (d < tmp && s[d]>=s[tmp]) d++;
        k--;
        swap(s[d], s[tmp]);
    }
    cout << s<< endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}