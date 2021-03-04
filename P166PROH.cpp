#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<int> F(3001,true);
vector<int> luu;
void sang()
{
    F[0]=F[1]=0;
    for(int i=2;i<=3000;i++)
        if (F[i])
        {
            luu.push_back(i);
            for(int j=i*i;j<=3000;j+=i) F[j]=0;
        }
}
bool kt(int a)
{
    int dem=0;
    for(int i=0;i<luu.size();i++)
        if (luu[i]<=a&&a%luu[i]==0) dem++;
    if (dem==2) return 1;
    return 0;
}
int main()
{
    sang();
    int n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if (kt(i)) res++;
    cout<<res;
	return 0;
}
