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
        int n,d=0,c;
        cin>>n;
        c=n-1;
        int a[1001]={};
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        while (d<c)
        {
            cout<<a[c]<<' '<<a[d]<<' ';
            d++;
            c--;
        }
        if (d==c) cout<<a[d];
        cout<<endl;
    }
	return 0;
}
