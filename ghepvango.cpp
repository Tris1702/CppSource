#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int T=1;
    cin>>T;
    FORT(t,0,T)
    {
        int n, res=0;
        cin>>n;
        vector<int> a(n),L(n),R(n);        
        FORT(i,0,n) cin>>a[i];
        deque<int> dq;
        dq.push_back(-1);
        FORT(i,0,n)
        {
            while (dq.size()>1&&a[dq.back()]>=a[i]) dq.pop_back();
            L[i]=dq.back()+1;
            dq.push_back(i);
        }
        dq.clear();
        dq.push_back(n);
        FORD(i,n,0)
        {
            while (dq.size()>1&&a[dq.back()]>=a[i]) dq.pop_back();
            R[i]=dq.back()-1;
            dq.push_back(i);
        }
        FORT(i,0,n) 
        {
            if (R[i]-L[i]+1>=a[i]) res=max(res,a[i]);
        }
        cout<<res<<'\n';
    }
    return 0;
} 