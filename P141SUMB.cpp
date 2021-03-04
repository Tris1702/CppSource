#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    int dem=0;
    bool dd[5001]={};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        if (dd[so]==0) dd[so]=1;
    }
    for(int i=1;i<=n;i++)
        if (dd[i]==0) dem++;
    cout<<dem;
	return 0;
}
