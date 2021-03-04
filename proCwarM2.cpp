#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n,tg,k,d;

int main()
{
    int T;
    cin>>T;
    FORT(t,1,T)
    {
        cin>>n>>tg>>k>>d;
        if (k>=n) cout<<"NO";
        else
        {
            int sum=0;
            while (d>=tg)
            {
                sum+=k;
                d-=tg;
            }
            if (d>0) sum+=k;
            if (sum+k<n) cout<<"YES.";
            else cout<<"NO";
        }
        cout<<endl;
    }
	return 0;
}
