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
    int x[n][n]={};
    string s;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        int it = 0;
        while (it < s.length())
        {
            while (it <s.length() && s[it] == ' ') it++;
            string tmp ="";
            while (it < s.length() && s[it]!=' ')
            {
                tmp = tmp + s[it];
                it++;
            }
            if (tmp.length()) x[i][stoi(tmp)-1]=1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++) cout << x[i][j]<<' ';
        cout << endl;
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}