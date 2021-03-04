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
        int n,dd[1001]={},maxx=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int so;
            cin>>so;
            dd[so]++;
        }
        for(int i=0;i<=1000;i++)
            if (dd[maxx]<dd[i]) maxx=i;
        cout<<maxx<<endl;
    }
	return 0;
}
