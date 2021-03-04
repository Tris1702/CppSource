#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int x,y,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>x>>y;
    int res=1;
    for(int ngay=1;ngay<a[x];ngay++)
    {
        if (y==7)
        {
            res++;
            y=1;
        }
        else y++;
    }
    cout<<res;
	return 0;
}
