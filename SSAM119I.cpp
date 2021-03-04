#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
struct diem
{
    int x,y,z;
    diem()
    {
        x=y=z=0;
    }
};
int kt(diem b,diem n, diem a)
{
    return (n.x*(b.x-a.x)+n.y*(b.y-a.y)+n.z*(b.z-a.z));
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        diem a,b,c,d,ab,ac,n;
        cin>>a.x>>a.y>>a.z;
        cin>>b.x>>b.y>>b.z;
        cin>>c.x>>c.y>>c.z;
        cin>>d.x>>d.y>>d.z;
        ab.x=(b.x-a.x);
        ab.y=(b.y-a.y);
        ab.z=(b.z-a.z);
        ac.x=(c.x-a.x);
        ac.y=(c.y-a.y);
        ac.z=(c.z-a.z);
        n.x=ab.y*ac.z-ab.z*ac.y;
        n.y=ab.z*ac.x-ab.x*ac.z;
        n.z=ab.x*ac.y-ab.y*ac.x;
        if (kt(d,n,a)==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
