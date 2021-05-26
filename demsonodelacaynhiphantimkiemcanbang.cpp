#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<int> Tree, a;
int n;
int dem;

void buildTree(int l, int r, int node)
{
    if (l>r) return;
    int mid = (r+l)/2;
    Tree[node] = a[mid]; 
    buildTree(l, mid-1, node*2);
    buildTree(mid+1, r, node*2+1);
}

void init()
{
    Tree.clear();
    Tree.resize(4*n+5, -1);
    a.clear();
    a.resize(n);
    dem = 0;
}
void countLeafes(int node)
{
    if (Tree[node] == -1) return;
    if (Tree[node*2] == -1 && Tree[node*2+1] == -1) dem++;
    countLeafes(node*2);
    countLeafes(node*2+1);

}
void solve()
{
    cin >> n;
    init();
    for(int &i: a) cin >> i;
    sort(a.begin(), a.end());
    buildTree(0, n-1, 1);
    countLeafes(1);
    cout <<dem<< endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}
