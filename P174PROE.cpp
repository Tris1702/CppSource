#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[100001]={};
    vector<int> F;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    F.push_back(a[1]);
    for(int i=2;i<=n;i++)
        if (a[i]!=F[F.size()-1]) F.push_back(a[i]);
    if (F.size()==3&&F[2]-F[1]==F[1]-F[0]) cout<<"YES";
    else cout<<"NO";
	return 0;
}
