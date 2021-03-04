#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int b5,b3=0,du=0;
    b5=n/5;
    du=n-b5*5;
    b3=du/3;
    du-=b3*3;
    while (du>0&&b5>0)
    {
        b5--;
        du+=5;
        if (du%3==0)
        {
            b3=b3+du/3;
            du=0;
        }
    }
    if (b3*3+b5*5!=n) cout<<-1;
    else cout<<b3+b5;
	return 0;
}
