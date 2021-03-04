#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
vector<int> F(1000001,true);
map<long long,bool> m;
void sang()
{
    F[0]=F[1]=0;
    for(int i=2;i<=1e6;i++)
        if (F[i]==1)
        {
            long long k=(long long) i*i;
            m[k]=1;
            for(long long j=(long long)i*i;j<=1e6;j+=i) F[j]=0;
        }
}
int main()
{
    int n;
    cin>>n;
    sang();
    for(int i=1;i<=n;i++)
    {
        long long so;
        cin>>so;
        if (m[so]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
