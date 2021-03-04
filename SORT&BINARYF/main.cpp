#include <bits/stdc++.h>

using namespace std;
double v,sum=0;
vector<double> a,b;
int n;
int main()
{
    cin>>n>>v;
    for(int i=0;i<n;i++)
    {
        int so;
        cin>>so;
        a.push_back(so);
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        int so;
        cin>>so;
        b.push_back(so);
    }
    double minn=b[0]/a[0];
    for(int i=1;i<n;i++)
        if (b[i]/a[i]<minn) minn=b[i]/a[i];
    cout<<fixed;
    minn=minn*sum;
    if (minn<v) cout<<setprecision(6)<<minn;
    else cout<<setprecision(6)<<v;
    return 0;
}
