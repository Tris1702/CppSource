#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<int>a,b,f;
void truyvet(int n)
{
    if (n==-1) return;
    truyvet(f[n]);
    cout<<f[n]<<' ';
}
int main()
{
    int x,n,dem=0;
    cin>>n;
    while (cin>>x) 
    {
        dem++;
        a.push_back(x);
        f.push_back(-1);
        if (dem==n) break;
    }
    b.resize(a.size(),1e9);
    b[0]=-1e9;
    int res=1;
    for(int i=0;i<a.size();i++)
    {
        int k=lower_bound(b.begin(),b.end(),a[i])-b.begin();
        b[k]=a[i];
        f[i]=k; 
        res=max(res,k);
    }
    truyvet(res);
	return 0;
}
