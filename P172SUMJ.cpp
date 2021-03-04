#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int buoc;
    if (n%2==0) buoc=n/2;
    else buoc=n/2+1;
    while (buoc%m!=0)
    {
        buoc++;
        if (buoc>n)
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<buoc;
	return 0;
}
