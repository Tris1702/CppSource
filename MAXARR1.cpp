#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
vector<long long> F(100001,0), maxx(100001,0);
void prepare()
{
    F[0]=0;
    F[1]=1;
    maxx[0]=0;
    maxx[1]=1;
    for(int i=1;i<=50000;i++)
    {
        F[i*2]=F[i];
        maxx[i*2]=max(F[i*2],maxx[i*2-1]);
        F[i*2+1]=F[i]+F[i+1];
        maxx[i*2+1]=max(F[i*2+1],maxx[i*2]);
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    prepare();
    for(int t=1;t<=T;t++)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",maxx[n]);
    }
	return 0;
}
