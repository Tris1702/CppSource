#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        if (so==0) dem++;
    }
    if (dem==1) cout<<"YES";
    else cout<<"NO";
	return 0;
}
