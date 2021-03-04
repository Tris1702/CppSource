#include<iostream>
#include<math.h>
#include<stdbool.h>

using namespace std;
bool ktr(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 1;
    return 0;
}
int tcs(int a)
{
    int dem=0;
    while (a>0)
    {
        dem+=a%10;
        a/=10;
    }
    return dem;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        if (ktr(n))
        {
            int s1=tcs(n),s2=0;
            for(int i=2;i*i<=n;i++)
                if (n%i==0)
                {
                    int tmp=tcs(i);
                    while(n%i==0)
                    {
                        n/=i;
                        s2+=tmp;
                    }
                }
            if (n>1) s2+=tcs(n);
            if (s1==s2) cout<<"YES";
            else cout<<"NO";
        }
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
