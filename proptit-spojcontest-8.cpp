#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

vector<pair <int,int> > info(4000005);
void ic (int x)
{
    int t=info[x].F;
    info[x*2].F+=t;
    info[x*2+1].F+=t;
    info[x*2].S+=t;
    info[x*2+1].S+=t;
    info[x].F=0;
}
void update(int x,int l,int h,int u,int v,int val)
{
    if (v<l||h<u) return;
    if (u<=l&&h<=v)
    {
        info[x].F+=val;
        info[x].S+=val;
        return;
    }
    ic(x);
    int m=(l+h)/2;
    update(x*2,l,m,u,v,val);
    update(x*2+1,m+1,h,u,v,val);
    info[x].S=max(info[x*2].S,info[x*2+1].S);
}
int query(int x,int l,int h,int i,int j)
{
    if (j<l||i>h) return -1;
    if (l>=i&&h<=j) return info[x].S;
    ic(x);
    int m=(l+h)/2;
    return max(query(x*2,l,m,i,j),query(x*2+1,m+1,h,i,j));
}
vector<int> Z_algorithm(string a, string b)
{
    vector<int> Z(a.length()+b.length()+1,0);
    string s = b+'#'+a;
    int L = 0, R = 0;
    for(int i = 1; i < s.length(); i++)
    {
        if (i > R) // Find Z box
        {
            L = R = i;
            while (R < s.length() && s[R] == s[R-L]) R++;
            Z[i] = R - L;
            R--;
            continue;
        }
        int k = i-L;
        if (Z[k] < R-i+1) Z[i] = Z[k];
        else
        {
            L = i;
            while (R < s.length() && s[R] == s[R-L]) R++;
            Z[i] = R-L;
            R--;
        }
    }
    return Z;
}
void solve()
{
    string a, b;
    cin >> a >> b;
    vector<int> Ztmp;
    Ztmp = Z_algorithm(a, b);
    vector<int> Z(Ztmp.begin()+b.length(), Ztmp.end());
    // for(int i = 0; i < Z.size(); i++) cout << i <<' ';
    // cout << endl;
    // for(int i: Z) cout << i <<' ';
    // cout << endl;
    int n = Z.size()-1;
    for(int i = 1; i <Z.size(); i++)
    {
        update(1, 1, n, i, i, Z[i]);
    }
    int Q;
    cin >> Q;
    for(int q = 0; q < Q; q++)
    {
        int l ,r;
        cin >> l >> r;
        cout << query(1, 1, n, l, r) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}