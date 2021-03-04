#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<bool> F(10005,0);
vector<int> res;
void prepare()
{
    F[0]=F[1]=1;
    for(int i=2;i<=10000;i++)
        if (F[i]==0)
            for(int j=i*i;j<=10000;j+=i) 
                if (j<=10000) F[j]=1;
    for(int i=0;i<=10000;i++)
    {
        if (F[i]==0) res.push_back(i);
    }
}
void solve()
{
    int n;
    cin>>n;
    cout<<res[n-1]<<endl;
}
int main()
{
    prepare();
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}