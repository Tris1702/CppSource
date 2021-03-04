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
        int a;
        cin>>a;
        if (360%(180-a)==0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
	return 0;
}
