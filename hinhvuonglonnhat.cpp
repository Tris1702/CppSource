#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m]={};
    FORT(i,0,n)
        FORT(j,0,m) cin>>a[i][j];
    FORT(j,0,m)
        FORT(i,1,n) 
            if(a[i][j]==1) a[i][j]=a[i-1][j]+1;
            else a[i][j]=0;
    long long res=0;
    FORT(i,0,n)
    {
        stack <int> st;
        int L[m]={},R[m]={};
        st.push(-1);
        FORT(j,0,m)
        {
            while (st.size()>1 && a[i][st.top()]>=a[i][j]) st.pop();
            L[j]=st.top()+1;
            st.push(j); 
        }
        while (!st.empty()) st.pop();
        st.push(m);
        FORD(j,m,0)
        {
            while (st.size()>1 && a[i][st.top()]>=a[i][j]) st.pop();
            R[j]=st.top()-1;
            st.push(j);
        }
        
        FORT(j,0,m) 
        {
            long long tmp = min((R[j]-L[j]+1),a[i][j]);
            res=max(res,(long long)tmp);
		}
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}