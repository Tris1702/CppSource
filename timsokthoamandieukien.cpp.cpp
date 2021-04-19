#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
bool check1(int n)
{
    bool dd[10]={};
    while (n > 0)
    {
        if(dd[n%10]) return 0;
        else dd[n%10] = 1;
        n /= 10;
    }
    return 1;
}
bool check2(int n)
{
    while (n>0)
    {
        if(n%10 > 5) return 0;
        n/=10;
    }
    return 1;
}
void solve()
{
    int l, r, res = 0;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
        if (check1(i) && check2(i)) res++;
    cout << res << endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}