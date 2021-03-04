#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
vector<unsigned long long> F;
long long maxx=1e18;
void prepare()
{
    unsigned long long f1=1,f2=2;
    F.push_back(0);
    F.push_back(1);
    F.push_back(2);
    while (f2<1e18)
    {
        unsigned long long tmp=f2;
        f2=f1+f2;
        f1=tmp;
        F.push_back(f2);
    }
}
int main()
{
    prepare();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        unsigned long long n;
        cin>>n;
        bool kt=0;
        for(int i=0;i<F.size();i++)
        {
            if (F[i]==n)
            {
                cout<<"YES";
                kt=1;
            }
        }
        if (kt==0) cout<<"NO";
        cout<<endl;
    }
	return 0;
}
