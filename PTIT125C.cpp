#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1]={};
    int b[n+2]={};
    FORT(i,1,k)
    {
        int l,r;
        cin>>l>>r;
        if (l==r) a[l]++;
        else
        {
            b[l]++;
            b[r+1]--;
        }
    }
    int tmp=0;
    FORT(i,1,n)
    {
        tmp+=b[i];
        a[i]+=tmp;
    }
    sort(a+1,a+1+n);
    cout<<a[(n+1)/2];
	return 0;
}
