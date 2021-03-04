#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    long long n,k,dem=0;
    vector<long long>a,b;
    long long res=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        if (so<0) a.push_back(so);
        else
        {
            res+=so;
            b.push_back(so);
        }
    }
    dem=a.size();
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    if (dem>0)
    {
        if (dem>=k)
        {
            for(int i=0;i<a.size();i++)
                if (k>0)
                {
                    res+=-a[i];
                    k--;
                }
                else res+=a[i];
        }
        else
        {
            for(int i=0;i<a.size()-1;i++)
                if (k>0)
                {
                    res+=-a[i];
                    k--;
                }
            if (k%2==0) res+=a[a.size()-1];
            else res+=-a[a.size()-1];
        }
    }
    else
    {
        res-=b[0];
        if (k%2==0) res+=a[0];
        else res+=-a[0];
    }
    cout<<res;
	return 0;
}
