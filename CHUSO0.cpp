#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll count5(ll N)
{
    ll dem = 0;
    do
    {
        N /= 5;
        dem += N;
    }
    while (N >= 5);
    return dem;
}
ll Try(ll a, ll b, ll N)
{
    if (a == b) return a;
    ll mid  = (a+b)/ 2;
    ll count = count5(mid);
    if (count >= N) return Try(a, mid, N);
    else return Try(mid+1, b, N);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        ll tmp = Try(5, 5*N, N);
        while (tmp % 5) tmp--;
        cout <<tmp << endl;
    }
    return 0;
}