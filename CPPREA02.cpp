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
        int n,dem=0;
        vector<long long> a;
        a.resize(0);
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            long long so;
            cin>>so;
            if (so==0) dem++;
            else a.push_back(so);
        }
        for(int i=0;i<a.size();i++) cout<<a[i]<<' ';
        for(int i=1;i<=dem;i++) cout<<0<<' ';
        cout<<endl;
    }
	return 0;
}
