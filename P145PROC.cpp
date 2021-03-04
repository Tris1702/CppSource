#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool dd[42]={};
int main()
{
    for(int i=1;i<=10;i++)
    {
        int so;
        cin>>so;
        dd[so%42]=1;
    }
    int dem=0;
    for(int i=0;i<42;i++)
        if (dd[i]==1) dem++;
    cout<<dem;
	return 0;
}
