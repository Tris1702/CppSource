#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    m=n;
    int cs4=n/4,cs7=0;
    while (cs7*7+cs4*4!=m&&cs4>0)
    {
        cs4--;
        cs7++;
    }
    if (cs4>0)
    {
        for(int i=1;i<=cs4;i++) cout<<4;
        for(int i=1;i<=cs7;i++) cout<<7;
    }
    else cout<<-1;
	return 0;
}
