#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int x,so,diet;
    cin>>x>>so;
    diet=x*so;
    for(int i=1;i<=5;i++)
    {
        int bet;
        cin>>bet;
        cout<<bet-diet<<' ';
    }
	return 0;
}
