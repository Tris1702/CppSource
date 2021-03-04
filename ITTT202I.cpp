#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long t1,t2,t3,tong;
    cin>>t1>>t2>>t3>>tong;
    if (tong<t1) swap(t1,tong);
    if (tong<t2) swap(t2,tong);
    if (tong<t3) swap(t3,tong);
    t1=tong-t1;
    t2=tong-t2;
    t3=tong-t3;
    if (t1>t2) swap(t1,t2);
    if (t1>t3) swap(t1,t3);
    if (t3<t2) swap(t3,t2);
    cout<<t1<<' '<<t2<<' '<<t3;
	return 0;
}
