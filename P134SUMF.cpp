#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n,k;
vector<bool> F(1001,true);
void sang()
{
    int dem=0;
    F[0]=F[1]=0;
    for(int i=2;i<=n;i++)
        if (F[i])
        {
            dem++;
            if (dem==k)
            {
                cout<<i;
                return;
            }
            for(int j=i*i;j<=n;j+=i)
            {
                if (F[j]==1)
                {
                    dem++;
                    F[j]=0;
                }
                if (dem==k)
                {
                    cout<<j;
                    return;
                }
            }
        }
}
int main()
{
    cin>>n>>k;
    sang();
	return 0;
}
