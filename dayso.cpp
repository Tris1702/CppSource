#include<bits/stdc++.h>
#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void prepare()
{

}

void init()
{

}

int n;
vector<int> a;
void solve()
{
    cin>>n;
    a.resize(n);
    int minn=1e9;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        minn=min(minn, a[i]);
    }
    int res=0;
    bool ok=1;
    for(int i=minn; i>=1; i--)
    {
        ok=1;
        for(int j=0; j<a.size(); j++)
        {
            int b=a[j]/i;
            if(a[j]/b == i)
            {
                while(b != 0 && a[j]/b == i)
                {
                    b--;
                }
                res+=(b+1);
            }
            else 
            {
                ok=0;
                res=0;
                break;
            }
        }
        if(ok==1) break;
    }
    cout<<res;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) solve();
    return 0;
}