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
        int n;
        cin>>n;
        vector<bool> dd(n,0);
        for(int i=1;i<=n;i++)
        {
            long long so;
            cin>>so;
            if (so>=0&&so<n) dd[so]=1;
        }
        for(int i=0;i<n;i++)
            if (dd[i]) cout<<i<<' ';
            else cout<<-1<<' ';
        cout<<endl;
    }
	return 0;
}
