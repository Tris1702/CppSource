#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> F;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        string tmp;
        cin>>tmp;
        F.push_back(tmp);
    }
    sort(F.begin(),F.end());
    int tmp=0,i=0;
    while (tmp<=k)
    {
        i++;
        tmp=i*(i+1)/2;
    }
    i--;
    tmp=i*(i+1)/2;
    if (k==tmp) cout<<F[i-1];
    else
    {
        k-=tmp;
        int j;
        for( j=0;k>1;j++) k--;
        cout<<F[j];
    }
	return 0;
}
