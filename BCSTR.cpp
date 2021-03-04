#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<vector<int> > F;
int main()
{
    string a,b;
    cin>>a>>b;
    F.resize(a.length()+1);
    F[0].resize(b.length()+1);
    for(int i=1;i<=a.length();i++)
    {
        F[i].resize(b.length()+1);
        for(int j=1;j<=b.length();j++)
            if (a[i-1]==b[j-1]) F[i][j]=F[i-1][j-1]+1;
            else F[i][j]=max(F[i-1][j],F[i][j-1]);
    }
    cout<<F[a.length()][b.length()];
	return 0;
}
