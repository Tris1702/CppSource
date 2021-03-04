#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string a[300001]={};
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    long long res=0;
    for(int i=1;i<=n;i++)
    {
        long long dem=-1;
        for(int j=-k;j<=k;j++)
            if (i+j<=n&&i+j>=1&&a[i+j].length()==a[i].length()) dem++;
        res+=dem;
    }
    cout<<res/2;
	return 0;
}
