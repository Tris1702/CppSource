#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
int n,m;
vector<int> x;
bool kt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    cin>>n>>m;
    for(int i=n;i<=m;i++)
        if(kt(i)) x.push_back(i);
    cout<<x.size()<<endl;
    for(int i=0;i<x.size();i++) cout<<x[i]<<' ';
    return 0;
}
