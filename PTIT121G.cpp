#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>

using namespace std;
int n;
vector<vector<int> > F;
bool kt(int vt1,int vt2)
{
    for(int i=0;i<F[vt1].size();i++)
        if (i<F[vt2].size())
            if (F[vt1][i]==F[vt2][i]) return 0;
    return 1;
}
int main()
{
    while (1)
    {
        cin>>n;
        F.clear();
        F.resize(n);
        if (n==0) return 0;
        for(int i=0;i<n;i++)
        {
            //F[i].push_back(i);
            for(int j=0;j<n;j++)
            {
                int so;
                cin>>so;
                if (so==1) F[i].push_back(j);
            }
        }
        bool ktr=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<F[i].size();j++)
                if (kt(i,F[i][j]))
            {
                ktr=0;
                break;
            }
            if (ktr==0) break;
        }
        if (ktr==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
	return 0;
}
