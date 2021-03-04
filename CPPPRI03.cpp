#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<bool> F(10004,true);
void sinh()
{
    F[0]=F[1]=0;
    for(int i=2;i<=10000;i++)
        if (F[i])
            for(long long j=(long long)i*i;j<=10000;j+=i)
                F[j]=0;
}
int main()
{
    sinh();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            if (F[i]) cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}
