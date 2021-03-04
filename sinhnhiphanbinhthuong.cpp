#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n,a[20]={};
void in()
{
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
void sinh()
{
    while (1)
    {
        for(int i=n;i>=0;i--)
        {
            if (i==0) return;
            if (a[i]==1) a[i]=0;
            else 
            {
                a[i]=1;
                in();
                break;
            }
        }
    }
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T)
    {
        cin>>n;
        sinh();
    }
    return 0;
}