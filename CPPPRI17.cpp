#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<bool> F(1000001,1);
void sang()
{
    F[0]=F[1]=0;
    for(int i=2;(long long) i*i<=1e6;i++)
        if (F[i])
        for(int j=i*i;j<=1e6;j+=i) F[j]=0;
}
int main()
{
    sang();
    int T;
    cin>>T;
    vector<int> luu;
    for(int i=1;i<=1e6;i++)
        if (F[i]) luu.push_back(i);
    for(int t=1;t<=T;t++)
    {
        long long l,r,res=0;
        cin>>l>>r;
        for(int i=0;i<luu.size();i++)
        {
            if ((long long) luu[i]*luu[i]<=r&&(long long) luu[i]*luu[i]>=l) res++;
            else break;
        }
        cout<<res<<endl;
    }
	return 0;
}
