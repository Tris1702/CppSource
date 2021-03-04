#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<long long> F;
void prepare()
{
    F.push_back(1);
    long long luu=1;
    for(int i=1;i<=11;i++)
    {
        luu*=i;
        F.push_back(luu);
    }
}
int main()
{
    int T;
    cin>>T;
    prepare();
    for(int t=1;t<=T;t++)
    {
        long long n;
        cin>>n;
        long long res=0;
        for(int i=1;n>0;i++)
        {
            res+=n%10*F[i];
            n/=10;
        }
        cout<<res<<endl;
    }
	return 0;
}
