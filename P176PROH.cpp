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
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<max(max(a,b),c)-min(min(a,b),c)<<endl;
    }
	return 0;
}
