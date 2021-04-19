#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

using namespace std;
vector<ll> F(51,0);
int sl=0;
void prepare(ll n)
{
	F.clear();
	F.resize(51,0);
    F[1]=1;
	n = n >> 1;
	int i = 2;
    while (n > 0) 
	{
		F[i]=F[i-1]*2+1;
		i++;
		n = n >> 1;
	}
	sl = i - 1;
}
int tim(int n, ll so, long long vt)
{
    if (n==1) return so%2;
    long long tmp=F[n-1];
    if (vt==tmp+1) return so%2;
    if (vt<tmp+1) return tim(n-1, so/2, vt);
    return tim(n-1,so/2, vt-tmp-1);
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
		ll n, l, r, res = 0;
        cin >> n >> l >> r;
		prepare(n);
        for(ll i = l; i<=r; i++)
			if (tim(sl, n, i) == 1) res++;
		cout << res << endl;
    }
	return 0;
}