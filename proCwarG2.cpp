#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n,m;
    vector<int> a;
    cin>>n>>m;
    FORT(i,1,n)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    FORT(i,0,a.size()-1)
    {
        int tmp=a[i]+m;
        int vt=upper_bound(a.begin()+i+1,a.end(),tmp)-a.begin();
        vt--;
        if (vt<=i) continue;
        if (a[vt]==tmp&&a[vt]>a[i])
        {
            cout<<a[i]<<' '<<a[vt];
            return 0;
        }
    }
    cout<<-1;
	return 0;
}
