#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        int a[101]={},b[101]={};
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        sort(a+1,a+1+n);
        sort(b+1,b+1+n);
        bool kt=1;
        for(int i=1;i<=n;i++)
            if (a[i]>b[i])
            {
                kt=0;
                break;
            }
        if (kt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
