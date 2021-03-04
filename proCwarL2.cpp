#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int s,a,n;
    cin>>s>>a>>n;
    int b[n+1]={};
    FORT(i,1,n) cin>>b[i];
    sort(b+1,b+1+n);
    FORT(i,1,n)
    {
        if (b[i]==a)
        {
            if (s>=a) cout<<a;
            else
                if (s<0) cout<<0;
                else cout<<s;
            return 0;
        }
        s-=b[i];
    }
	return 0;
}
