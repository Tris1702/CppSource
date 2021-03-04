#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool cmp(int a,int b)
{
    return (a>b);
}
int main()
{
    int n,res=0;
    cin>>n;
    vector<int> a(n);
    int dd[100005]={};
    FORT(i,0,n-1)
    {
        cin>>a[i];
        dd[a[i]]=i;
    }
    sort(a.begin(),a.end(),cmp);
    FORT(i,0,n-2)
        a[i]=a[i]-a[i+1];
    a.pop_back();
    sort(a.begin(),a.end());
    FORT(i,0,a.size()-1)
        if (i==dd[a[i]]) res++;
    cout<<res;
	return 0;
}
