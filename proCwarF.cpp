#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,l;
    long long res;
    cin>>n>>k;
    l=n-1-k;
    vector<int> a;
    cin>>res;
    n--;
    FORT(i,0,n-1)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    int i;
    for(i=n-1;k>0;i--,k--)
        res+=a[i];
    for(i=0;l>0;i++,l--)
        res-=a[i];
    cout<<res;
	return 0;
}
