#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
    int n,a[1001]={},res=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    queue<int> st;
    for(int i=1;i<=n;i++) st.push(a[i]);
    while (!st.empty())
    {
        vector<int> q;
        q.push_back(st.front());
        st.pop();
        int m=st.size();
        while (m>0&&!st.empty()&&st.front()>=q[q.size()-1])
        {
            if (st.front()>q[q.size()-1])
            {
                int tmp=st.front();
                st.pop();
                q.push_back(tmp);
                m--;
            }
            else
            {
                st.push(st.front());
                st.pop();
                m--;
            }
        }
        res+=q.size()-1;
    }
    cout<<res;
	return 0;
}
