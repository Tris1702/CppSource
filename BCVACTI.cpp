#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stack>
#define mp make_pair
#define F first
#define S second
using namespace std;
int n,next[500001]={},maxx=0;
bool dd[500001]={};
int DFS(int s)
{
    stack<pair<int,int> >st;
    st.push(mp(s,1));
    while (!st.empty())
    {
        pair<int,int> tmp=st.top();
        st.pop();
        if (dd[next[tmp.F]]) maxx=max(maxx,tmp.S);
        else
        {
            st.push(mp(next[tmp.F],tmp.S+1));
            dd[next[tmp.F]]=1;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if (a>b) next[b]=a; else next[a]=b;
    }
    DFS(1);
    cout<<maxx;
	return 0;
}
