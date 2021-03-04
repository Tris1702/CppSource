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
        int n,m,a[101]={},res=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++)
            for(int j=i+1;j<=n;j++)
                for(int k=j+1;k<=n;k++)
        {
            int tmp=a[i]+a[j]+a[k];
            if (tmp>res&&tmp<=m) res=tmp;
        }
        cout<<res<<endl;
    }
	return 0;
}
