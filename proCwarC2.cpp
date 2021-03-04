#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string np(int a)
{
    string res="";
    for(int i=a;i;i>>=1)
    {
        if (i&1) res='1'+res;
        else res='0'+res;
    }
    return res;
}
bool cmp(int a,int b)
{
    return (a>b);
}
int main()
{
    int n,m;
    cin>>n;
    m= (n%2)? ((n+1)/2): (n/2);
    int a[n+1];
    FORT(i,1,n) cin>>a[i];
    sort(a+1,a+1+n,cmp);
    cout<<np(a[m]);
	return 0;
}
