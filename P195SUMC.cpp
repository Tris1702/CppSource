#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,t25=0,t50=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        if (so==25) t25++;
        if (so==50)
        {
            if (t25>0)
            {
                t50++;
                t25--;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        if (so==100)
        {
            if (t50>0)
            {
                if (t25>0)
                {
                    t50--;
                    t25--;
                }
                else
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else
            {
                if (t25>=3) t25-=3;
                else
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
	return 0;
}
