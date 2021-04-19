#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
typedef long long ll;
bool mod(string u, int n)
{
    ll tmp = 0;
    for(char i: u)
    {
        tmp = tmp*10 + (i-'0');
        tmp %=n;
    }
    return (tmp == 0);
}
void Find( ll n)
{
    queue<string> q;
    q.push("1");
    while(!q.empty())
    {
        string u = q.front();
        q.pop();
        if (mod(u, n)) 
        {
            cout << u << endl;
            return;
        }
        q.push(u+ "0");
        q.push(u+ "1");
    }
}
void solve()
{
    ll n;
    cin >> n;
    Find(n);
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}