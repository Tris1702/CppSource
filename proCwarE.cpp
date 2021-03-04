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
    vector<int> a,b;
    b.push_back(-1e6);
    FORT(i,1,n)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    int vt=0;
    FORT(i,1,1e6)
    {
        if (i!=a[vt]) b.push_back(i);
        while (i==a[vt]) vt++;
    }
    if (b.size()==1)
    {
        cout<<"K L D V";
        return 0;
    }
    b.push_back(1e9);
    int vt1=upper_bound(b.begin()+1,b.end()-1,k)-b.begin();
    int vt2=vt1-1;
    if (b[vt1]-k<k-b[vt2]) cout<<b[vt1];
    else cout<<b[vt2];
	return 0;
}
