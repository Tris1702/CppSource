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
        int n,m,a,b;
        int res=0;
        cin>>n>>m>>a>>b;
        for(int i=n;i<=m;i++)
            if (i%a==0||i%b==0) res++;
        cout<<res<<endl;
    }
	return 0;
}
