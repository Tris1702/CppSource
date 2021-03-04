#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n,res=0;
    cin>>n;
    int a[n+1]={};
    FORT(i,1,n) cin>>a[i];
    vector<int> f;
    sort(a+1,a+1+n);
    FORT(i,1,n)
        FORT(j,i+1,n) f.push_back(a[i]+a[j]);
    sort(f.begin(),f.end());
    int i=0,tmp=0,h=0;
    while (i<f.size())
    {
        i++;
        while (i<f.size()&&f[i]==f[i-1]) i++;
        if (res<i-tmp)
        {
            res=i-tmp;
            h=f[tmp];
        }
        tmp=i;
    }
    cout<<h;
	return 0;
}
