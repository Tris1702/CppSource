#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second
 
using namespace std;
vector<vector<vector<int> > > f;
void prepare()
{
    f.resize(11);
    FORT(i,1,10)
    {
        vector<int> tmp(0);
        FORT(j,1,i+1) tmp.push_back(j);
        do
        {
            f[i].push_back(tmp);
        } while (next_permutation(tmp.begin(),tmp.end()));
    }
}
int main()
{
    int T=1;
    cin>>T;
    prepare();
    FORT(t,0,T)
    {
        string s;
        cin>>s;
        int n=s.length()+1;
        FORT(i,0,f[n].size())
        {
            bool ok=1;
            FORT(j,0,s.length())
            {
                if ((s[j]=='D'&&f[n][i][j]<f[n][i][j+1])||(s[j]=='I'&&f[n][i][j]>f[n][i][j+1]))
                {
                    ok=0;
                    break;
                }
            }
            if (ok)
            {
                FORT(j,0,n) printf("%d",f[n][i][j]);
                printf("\n");
                break;
            }
        }
    }
    return 0;
}