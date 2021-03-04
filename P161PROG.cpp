#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
bool cp(long long a)
{
    if (a==1) return 0;
    long long x=sqrt(a);
    if (x*x==a) return 1;
    return 0;
}
bool db(long long a)
{
    for(long long i=1;i<=sqrt(a);i++)
        if (a%i==0)
        {
            if (cp(i)) return 0;
            if (cp(a/i)) return 0;
        }
    return 1;
}
int main()
{
    long long n;
    vector<long long> F;
    cin>>n;
    for(long long i=1;i<=sqrt(n);i++)
        if (n%i==0)
        {
            F.push_back(i);
            if (n/i!=i) F.push_back(n/i);
        }
    sort(F.begin(),F.end(),greater<long long>() );
    for(int i=0;i<F.size();i++)
        if (db(F[i]))
        {
            cout<<F[i];
            break;
        }
	return 0;
}
