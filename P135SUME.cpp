#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[10]={};
bool ktt()
{
    for(int i=2;i<=8;i++)
        if (a[i]-1!=a[i-1]) return 0;
    return 1;
}
bool ktg()
{
    for(int i=2;i<=8;i++)
        if (a[i]+1!=a[i-1]) return 0;
    return 1;
}
int main()
{
    for(int i=1;i<=8;i++) cin>>a[i];
    if (ktt())
    {
        cout<<"ascending";
        return 0;
    }
    if (ktg())
    {
        cout<<"descending";
        return 0;
    }
    cout<<"mixed";
	return 0;
}
