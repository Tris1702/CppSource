#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
#define F first
#define S second
using namespace std;
map<int,pair<bool,int> > m;
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        m.clear();
        int minn=1e9,res=0;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int so;
            cin>>so;
            if (m[so].F==0)
            {
                m[so].F=1;
                m[so].S=i;
            }
            else
                if (minn>m[so].S)
                {
                    minn=m[so].S;
                    res=so;
                }
        }
        if (minn==1e9) cout<<"NO"<<endl;
        else cout<<res<<endl;
    }
	return 0;
}
