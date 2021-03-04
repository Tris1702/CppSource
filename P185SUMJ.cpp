#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,b1,b2,b2d=0,tc=0;
    cin>>n>>b1>>b2;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if (t==2)
        {
            if (b2==0) tc+=2;
            else b2--;
        }
        else
        {
            if (b1>0) b1--;
            else
            {
                if (b2d==1) b2d=0;
                else
                {
                    if (b2==0) tc++;
                    else
                    {
                        b2d=1;
                        b2--;
                    }
                }
            }
        }
    }
    cout<<tc;
	return 0;
}
