#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n,k,y;
vector<int> a;
int loang1 (int vt)
{
    vt++;
    int res=1;
    while (vt<n&&a[vt]-a[vt-1]<=y)
    {
        res++;
        vt++;
    }
    return res;
}
int loang2(int vt)
{
    vt--;
    int res=1;
    while (vt>-1&&a[vt+1]-a[vt]<=y)
    {
        res++;
        vt--;
    }
    return res;
}
int main()
{
    cin>>n>>k>>y;
    FORT(i,1,n)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    int kq=0;
    int vt=upper_bound(a.begin(),a.end(),k)-a.begin();
    if (vt<n&&a[vt]-k<=y) kq+=loang1(vt);
    vt--;
    if (vt>=0&&k-a[vt]<=y) kq+=loang2(vt);
    cout<<kq;
	return 0;
}
