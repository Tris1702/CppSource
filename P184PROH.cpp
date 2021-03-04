#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
#define F first
#define S second
#define mp make_pair
using namespace std;
vector<int > x;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        x.push_back(so);
    }
    int luu=1e9,res=0;
    for(int i=0;i<n;i++)
    {
        luu=min(luu,x[i]);
        res=max(res,x[i]-luu);
    }
    cout<<res;
	return 0;
}
