#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> F(10000001,0);
void prepare()
{
    F[0]=F[1]=0;
    for(int i=2;i<=1e7;i++)
        if (F[i]==0) 
        {
            F[i]=i;
            for(int j=i*2;j<=1e7;j+=i) 
            {
                int tmp=j/i;
                F[j]=F[tmp]+i;
            }
        }
}
void solve()
{
    int n,m=0,so;
    cin>>n;
    FORT(i,0,n) 
    {
        cin>>so;
        m+=F[so];
    }
    cout<<m<<endl;
}
int main()
{
    prepare();
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}