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
    cin>>n;
    vector<int> a(n);
    FORT(i,0,n) cin>>a[i];
    stack <int> st;
    vector<int> L(n);
    st.push(-1);
    FORT(i,0,n)
    {
        while (st.size()>1&& a[st.top()]<=a[i]) st.pop();
        L[i]=st.top()+1;
        st.push(i);
    }
    FORT(i,0,n) cout<<(i-L[i])+1<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}