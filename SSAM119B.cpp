#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<long long> F(51,0);
void prepare()
{
    F[1]=1;
    for(int i=2;i<=50;i++) F[i]=F[i-1]*2+1;
}
int tim(int n,long long vt)
{
    if (n==1) return 1;
    long long tmp=F[n-1];
    if (vt==tmp+1) return n;
    if (vt<=tmp) return tim(n-1,vt);
    if (vt>tmp+1) return tim(n-1,vt-tmp-1);
}
int main()
{
    prepare();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        long long k;
        cin>>n>>k;
        cout<<tim(n,k)<<endl;
    }
	return 0;
}
