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
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b = a;
    sort(a.begin(),a.end());
    for(int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[i] != b[n-i-1])
        {
            cout << "No" <<endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}