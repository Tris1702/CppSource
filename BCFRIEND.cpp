#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
map<int,int> m;
int main()
{
    int n,b,a[100005]={};
    long long res=0;
    cin>>n>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    for(int i=1;i<=n;i++)
        if (m[b-a[i]]>0)
        {
            res+=m[b-a[i]];
            if (a[i]*2==b) res--;
        }
    cout<<res/2;
	return 0;
}
