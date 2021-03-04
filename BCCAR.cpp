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
        int n,minn=1e9,maxx=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int so;
            cin>>so;
            minn=min(minn,so);
            maxx=max(maxx,so);
        }
        cout<<2*(maxx-minn)<<endl;
    }
	return 0;
}
