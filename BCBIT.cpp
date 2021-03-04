#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long F[101][101][2]={};
void prepare()
{
    F[2][1][1]=1;
    for(int i=3;i<=5;i++)
        for(int j=1;j<i;j++)
        {
            F[i][j][0]=F[i-1][j][1]+F[i-1][j][0];
            F[i][j][1]=F[i-1][j-1][1]+F[i-1][j][0]+1;
        }
}
int main()
{
    prepare();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int tt,n,k;
        cin>>tt>>n>>k;
        cout<<F[n][k][1]+F[n][k][0]<<endl;
    }
	return 0;
}
