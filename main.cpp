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
    string s;
    int dem = 0;
    while (cin >> s)
    {
        if (s == ".") break;
        dem++;
    }
    cout<<dem;
}
int main()
{
    int t=1;
    //cin>>t;
    while (t--) solve();
}