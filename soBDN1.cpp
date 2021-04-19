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
    string n;
    cin >> n;
    bool check = 0;
    unsigned long long dem = 0;
    for(int i = 0; i< n.length(); i++)
    {
        if (n[i] == '0') continue;
        if (n[i] == '1')
        {
            dem += 1 << n.length()-i-1;
            continue;
        }
        for(int j = i; j < n.length();j++)
        {
            // check = 1;
            dem += 1 << n.length()-j-1;
        }
        break;
    }
    // if (check == 0) cout << dem-1 <<endl;
    // else 
    cout<<dem<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}