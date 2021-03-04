#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int tong=0;
    for(int i=1;i<=5;i++)
    {
        int so;
        cin>>so;
        tong+=so;
    }
    if (tong%5==0&&tong>0) cout<<tong/5;
    else cout<<-1;
	return 0;
}
