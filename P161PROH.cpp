#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[3005]={},n;
bool dd[3005]={};
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dd[a[i]]=1;
    }
    dd[0]=1;
    int i=0;
    while (dd[i]) i++;
    cout<<i;
	return 0;
}
