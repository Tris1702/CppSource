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
        int n,le=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int so;
            cin>>so;
            if (so%2) le++;
        }
        if (le==0||(le==n&&n%2==0) )cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
	return 0;
}
