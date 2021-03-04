#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;
vector<int> F(1000001,1);
int maxx=1e6;
void sang()
{
    for(int i=2;i<=maxx;i++)
        {
            int dem=i;
            for(long long j=(long long)i*i;j<=maxx;j+=i)
            {
                F[j]=F[j]+i;
                if (i*i!=j) F[j]=F[j]+j/i;
            }
        }
    F[1]=0;
}

int main()
{
    int l,r,dem=0;
    sang();
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if (F[i]>i) dem++;
    }
    cout<<dem;
	return 0;
}
