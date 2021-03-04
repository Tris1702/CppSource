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
        int n,k,res=0;
        cin>>n>>k;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        int d=1,c=n;
        while (d<c)
        {
            while (d<=n&&a[d]<=k) d++;
            while (c>0&&a[c]>k) c--;
            if (d<c)
            {
                res++;
                d++;
                c--;
            }
        }
        cout<<res<<endl;
    }
	return 0;
}
