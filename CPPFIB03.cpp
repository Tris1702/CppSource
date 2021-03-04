#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<int> x,res;
int a[101]={};
void prepare()
{
    x.push_back(0);
    x.push_back(1);
    x.push_back(2);
    int f1=1,f2=2;
    while(f2+f1<=1e4)
    {
        int tmp=f2;
        f2=f1+f2;
        f1=tmp;
        x.push_back(f2);
    }
}
bool kt(int n)
{
    int i;
    for(i=0;i<x.size();i++)
        if (x[i]>=n) break;
    if (i==x.size()) return 0;
    if (x[i]==n) return 1;
    return 0;
}
int main()
{
    prepare();
    int T;
    cin>> T;
    for(int t=1;t<=T;t++)
    {
        res.resize(0);
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++)
            if (kt(a[i])) res.push_back(a[i]);
        for(int i=0;i<res.size();i++) cout<<res[i]<<' ';
        cout<<endl;
    }
	return 0;
}
