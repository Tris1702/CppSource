#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
using namespace std;

int solve()
{
    queue <int> q;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int kh;
        cin>>kh;
        if (kh==3)
        {
            int so;
            cin>>so;
            q.push(so);
        }
        if (kh==1) cout<<q.size()<<endl;
        if (kh==2)
            if (q.empty()) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        if (kh==4)
            if (!q.empty()) q.pop();
        if (kh==5)
            if (!q.empty()) cout<<q.front()<<endl;
            else cout<<-1<<endl;
        if (kh==6)
            if (!q.empty()) cout<<q.back()<<endl;
            else cout<<-1<<endl;
    }
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}