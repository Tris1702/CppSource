#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define mp make_pair
#define F first
#define S second
using namespace std;

int main()
{
    vector<pair<int,int> > luu;
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    for(int i=a;i<=x;i++)
        for(int j=b;(j<i&&j<=y);j++)
            luu.push_back(mp(i,j));
    cout<<luu.size()<<endl;
    for(int i=0;i<luu.size();i++)
        cout<<luu[i].F<<' '<<luu[i].S<<endl;
	return 0;
}
