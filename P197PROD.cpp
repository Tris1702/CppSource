#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,m,so;
        cin>>n>>m;
        for(int i=1;i<=n;i++) cin>>so;
        for(int i=1;i<=m;i++) cin>>so;
        if (n>m) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
	return 0;
}
