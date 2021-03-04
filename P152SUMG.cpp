#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool kt(int n)
{
    if (n==1||n==0) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int main()
{
    int x,y;
    cin>>x>>y;
    if (kt(y))
    {
         for(int i=x+1;i<y;i++)
            if (kt(i))
            {
                cout<<"NO";
                return 0;
            }
        cout<<"YES";
    }
    else cout<<"NO";

	return 0;
}
