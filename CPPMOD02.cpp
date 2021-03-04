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
        int a,m;
        cin>>a>>m;
        int i;
        for(i=0;i<m;i++)
            if ((a*i)%m==1)
            {
                cout<<i;
                break;
            }
        if (i==m) cout<<-1;
        cout<<endl;
    }
	return 0;
}
