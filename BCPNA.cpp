#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<bool> F(1000001,1);
vector <int> x;
void sang()
{
    F[0]=F[1]=1;
    for(int i=2;i<=1e6;i++)
        if (F[i])
        {
            x.push_back(i);
            for(long long j=(long long)i*i;j<1e6;j+=i) F[j]=0;
        }
}
int main()
{
    sang();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,dem=0;
        cin>>n;
        for(int i=0;i<x.size();i++)
        {
            int j=i;
            int res=x[j];
            while (j<x.size()-1&&res<n)
            {
                j++;
                res+=x[j];
            }
            if (res==n) dem++;
        }
        cout<<dem<<endl;
    }
	return 0;
}
