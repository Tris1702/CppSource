#include<bits/stdc++.h>
using namespace std;
void Run()
{
    long long n, k;
    cin>>n>>k;
    deque<long long> st;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        st.push_back(a);
    }
    long long a,res;
    a=st.front();
    while(st.size()>0)
    {
        if(a==st.front()) res=0;
        else res=1;
        a=st.front();
        st.pop_front();
        while(a>st.front()&&st.size()>0)
        {
            res++;
            st.pop_front();
        }
        if(res>=k) 
        {
            cout<<a;
            return;
        }
    }
    cout<<a;
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    Run();
    return 0;
}
