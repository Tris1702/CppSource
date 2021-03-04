#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T)
    {
        int n;
        cin>>n;
        int a=1;
        FORT(i,0,n) a<<=1;
        for(int i=0;i<a;i++) 
        {
            int thu=a>>1;
            for(int j=0;j<n;j++)
            {
                if (i&thu) cout<<1;
                else cout<<0;
                thu>>=1;
            }
            cout<<endl;
        }
    }
    return 0;
}