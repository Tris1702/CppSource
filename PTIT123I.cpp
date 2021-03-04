#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int maxx=246912;
    vector<bool> mark(maxx+1,true);
    vector<int> dem(246913,0);
    mark[0]=mark[1]=0;
    for(int i=2;i<=maxx;i++)
        if (mark[i])
            for(long long j=(long long)i*i;j<=(long long) maxx;j+=i) mark[j]=0;
    for(int i=1;i<=246913;i++)
        if (mark[i]!=0) dem[i]=dem[i-1]+1; else dem[i]=dem[i-1];
    while (1)
    {
        int n;
        cin>>n;
        if (n==0) return 0;
        cout<<dem[n*2]-dem[n]<<endl;
    }
    return 0;
}
