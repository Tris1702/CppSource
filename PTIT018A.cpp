#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<bool> F(1000001,true);
vector<int> x;
void sang()
{
    F[0]=F[1]=1;
    for(int i=2;i<=1e6;i++)
        if (F[i])
    {
        x.push_back(i);
        for(long long j=(long long) i*i;j<=1e6;j+=i) F[j]=0;
    }
}
bool kt(int a,int vt)
{
    for(int i=vt+1;(i<=vt+6&&i<x.size());i++)
        if (x[i]==a) return 1;
    return 0;
}
int main()
{
    sang();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int l,r,res=0;
        cin>>l>>r;
        for(int i=0;i<=x.size();i++)
            if (x[i]>=l&&x[i]<=r&&x[i]+6>=l&&x[i]+6<=r&&kt(x[i]+6,i)) res++;
        cout<<res<<endl;
    }
	return 0;
}
