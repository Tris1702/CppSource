#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<long long> F(1000005,1);
long long sang()
{
    for(long long i=2;(long long) i*i<=1e6;i++)
        if (F[i]==1)
        {
            for(long long j=i*i;j<=1e6;j+=i)
                if (F[j]==1) F[j]=i;
            F[i]=i;
        }
}
int main()
{
    long long T;
    sang();
    cin>>T;
    for(long long t=1;t<=T;t++)
    {
        long long n;
        cin>>n;
        for(long long i=1;i<=n;i++) cout<<F[i]<<' ';
        cout<<endl;
    }
	return 0;
}
