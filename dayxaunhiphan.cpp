#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

vector<long long> F;
void prepare()
{
    F.resize(93);
    F[1]=1;
    F[2]=1;
    for(int i=3;i<93;i++) F[i]=F[i-2]+F[i-1];
}
char tim(int n,long long vt)
{
    if (n==1) return '0';
    if (n==2) return '1';
    if (vt<=F[n-2]) return tim(n-2,vt);
    else return tim(n-1,vt-F[n-2]);
}
int main()
{
    int T;
    prepare();
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        long long i;
        cin>>n>>i;
        cout<<tim(n,i)<<endl;
    }
	return 0;
}
