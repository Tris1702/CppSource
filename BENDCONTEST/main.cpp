#include <iostream>
#include <vector>
using namespace std;
vector<bool> F(10005,true);
void sang(int n)
{
    F[0]=F[1]=0;
    for(int i=2;i<=n;i++)
        if (F[i])
        for(int j=i*i;j<=n;j+=i) F[j]=0;
}
int main()
{
    int n;
    cin>>n;
    sang(n);
    for(int i=1;i<=n;i++)
        if (F[i]) cout<<i<<' ';
    return 0;
}
