#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
const long long mod = 1e9+7;
void prepare()
{

}
void solve()
{
    int N;
    cin >> N;
    long long res = 1;
    long long tanso[100005]={};
    for(int n = 2; n <= N; n++)
    {
        int ntmp = n;
        for(int i = 2; i <= sqrt(ntmp); i++)
            if(ntmp%i == 0)
            {
                long long dem = 0;
                while (ntmp% i == 0)
                {
                    dem++;
                    ntmp /= i;
                }
                tanso[i] = max(tanso[i], dem);
            }
        if(ntmp> 1) tanso[ntmp] = max(tanso[ntmp], 1LL);
    }
    for(int i : tanso)
    {
        res = (res * (i + 1)) % mod;
    }
    cout <<res<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}