#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
#define F first
#define S second
using namespace std;
map<pair<int,int>,int > m;
int main()
{
    int n,res=0;
    cin>>n;
    vector<pair<int,int> > x;
    for(int i=1;i<=n;i++)
    {
        pair<int,int> a;
        cin>>a.F>>a.S;
        x.push_back(a);
        m[a]++;
    }
    for(int i=0;i<x.size();i++) res=max(res,m[x[i]]);
    cout<<res;
	return 0;
}
