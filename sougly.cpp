#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int mod = 1e9+7;
vector<int> a;
void prepare()
{
    priority_queue<int, vector<int> ,greater<int> > q;
    set<int> s;
    q.push(1);
    while (a.size() <1e4)
    {
        int u = q.top();
        q.pop();
        a.push_back(u);
        if (s.count(u*2) == 0) 
        {
            q.push(u*2);
            s.insert(u*2);
        }
        if (s.count(u*3) == 0) 
        {
            q.push(u*3);
            s.insert(u*3);
        }
        if (s.count(u*5) == 0) 
        {
            q.push(u*5);
            s.insert(u*5);
        }
    }
}

void init()
{

}

void solve()
{
    int n;
    cin >> n;
    cout << a[n-1]<<endl;
}   
int main()
{
    prepare();
    int t = 1;
    cin >> t;
    while (t--) solve();
    // for(int i = 0; i<11; i++) cout << a[i]<<' ';
}