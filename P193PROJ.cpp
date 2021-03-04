#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    long long d,r,c[3]={};
    cin>>d>>r;
    if (d<r)
    {
        int tmp=d;
        d=r;
        r=tmp;
    }
    for(int i=0;i<3;i++) cin>>c[i];
    sort(c,c+3);
    if (c[2]*c[2]==c[0]*c[0]+c[1]*c[1]&&c[0]<=r&&c[1]<=d) cout<<"YES";
    else cout<<"NO";
	return 0;
}
