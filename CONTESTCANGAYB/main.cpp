#include <bits/stdc++.h>

using namespace std;
vector<long long> F(1000001,1);
void prepare()
{
    F[1]=1;
    F[0]=0;
    for(int i=2;i<=1e6;i++)
        {
            if (i%2!=0) F[i]+=i;
            for(long long j=(long long) i*i;j<=1e6;j+=i)
            {
                if (i%2!=0) F[j]+=i;
                if (j/i!=i&&j/i%2!=0) F[j]+=j/i;
            }
        }
}
int main()
{
    prepare();
    int a,b;
    long long res=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++) res+=F[i];
    cout<<res;
    return 0;
}
