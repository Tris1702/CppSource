#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int ucln(int a,int b)
{
    while (a>0)
    {
        if (a<b)
        {
            int tmp=a;
            a=b;
            b=tmp;
        }
        a%=b;
    }
    return b;
}
int bcnn(int a,int b)
{
    long long c=(long long) a*b;
    return c/ucln(a,b);
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        vector<int> b;
        int a[1001]={};
        for(int i=1;i<=n;i++) cin>>a[i];
        b.push_back(a[1]);
        for(int i=2;i<=n;i++) b.push_back(bcnn(a[i],a[i-1]));
        b.push_back(a[n]);
        for(int i=0;i<b.size();i++) cout<<b[i]<<' ';
        cout<<endl;
    }
	return 0;
}
