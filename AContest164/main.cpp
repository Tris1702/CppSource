#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("A.inp","r",stdin);
    freopen("A.out","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,s,k;
        map<int,bool> m;
        m.clear();
        cin>>n>>s>>k;
        for(int i=1;i<=k;i++)
        {
            int so;
            cin>>so;
            m[so]=1;
        }
        int i=s,j=s;
        while (1)
        {
            if (i>0&&j<=n&&m[i]==0||m[j]==0)
            {
                if (i>0&&m[i]==0)
                {
                    cout<<s-i<<endl;
                    break;
                }
                if (m[j]==0)
                {
                    cout<<j-s<<endl;
                    break;
                }
            }
            else
            {
                i--;
                j++;
            }
        }
    }
    return 0;
}
