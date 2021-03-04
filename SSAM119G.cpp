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
        int n,k,stmp=0,a[101]={};
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<bool> F(10001,0);
        F[0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=k;j>=a[i];j--)
                if (F[j]||F[j-a[i]]) F[j]=1;
        }
        if (F[k]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
