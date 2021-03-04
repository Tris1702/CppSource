#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    while (1)
    {
        int n;
        cin>>n;
        if (n==0) break;
        int so=1,sl=0;
        for(int i=1;i<=n;i++)
        {
            int sltmp;
            cin>>sltmp;
            int tmp=sltmp;
            sltmp-=sl;
            sl=tmp;
            for(int j=1;j<=sltmp;j++) cout<<so<<' ';
            so++;

        }
        cout<<endl;
    }
	return 0;
}
