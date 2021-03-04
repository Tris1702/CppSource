#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<string>f;
bool kt(int vt1,int vt2)
{
    FORT(i,1,f.size()-1)
    {
        bool ok=0;
        FORT(j,0,f[i].size()-(vt2-vt1+1))
        {
            int dem=0;
            FORT(k,vt1,vt2)
            if (f[i][j+k-vt1]==f[0][k]) dem++;
            if (dem==vt2-vt1+1) ok=1;
        }
        if (ok==0) return 0;
    }
    return 1;
}
int main()
{
    int T;
    cin>>T;
    FORT(t,1,T)
    {
        int n,maxx=0,luui=0,luuj=0;
        cin>>n;
        f.resize(0);
        FORT(i,1,n)
        {
            string s;
            cin>>s;
            f.push_back(s);
        }
        FORT(ii,0,f[0].size()-1)
            FORT(jj,ii,f[0].size()-1)
                if (kt(ii,jj)&&jj-ii+1>maxx)
                {
                    maxx=jj-ii+1;
                    luui=ii;
                    luuj=jj;
                }
        if (maxx<3) cout<<"no significant commonalities";
        else
        {
            FORT(i,luui,luuj) cout<<f[0][i];
        }
        cout<<endl;
    }
	return 0;
}
