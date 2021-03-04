#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[11]={},b[11]={},m;
bool ktr(int so)
{
    for(int i=1;i<=m;i++)
        if (b[i]==so) return 1;
    return 0;
}
int main()
{
    int n;
    vector<int> luu;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];
    for(int i=1;i<=n;i++)
        if (ktr(a[i])) luu.push_back(a[i]);
    for(int i=0;i<luu.size();i++) cout<<luu[i]<<' ';
	return 0;
}
