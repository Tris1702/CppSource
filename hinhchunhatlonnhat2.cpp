#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int n;
	cin >> n;
	long long a[n] = {};
	FORT(i, 0, n) cin >> a[i];
	long long res=0;
    stack <long long> st;
	long long L[n]={},R[n]={};
	st.push(-1);
	FORT(j,0,n)
	{
		while (st.size()>1 && a[st.top()]>=a[j]) st.pop();
		L[j]=st.top()+1;
		st.push(j); 
	}
	while (!st.empty()) st.pop();
	st.push(n);
	FORD(j,n,0)
	{
		while (st.size()>1 && a[st.top()]>=a[j]) st.pop();
		R[j]=st.top()-1;
		st.push(j);
	}
    FORT(j,0,n) res=max(res,(long long)((R[j]-L[j]+1)*a[j]));
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}