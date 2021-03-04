#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool dd[50]={};
bool check()
{
    int dem=0;
    for(int i=1;i<=49;i++)
        if (dd[i]) dem++;
    return (dem==49);
}
int main()
{
    while (1)
    {
        int n;
        cin>>n;
        for(int i=1;i<=49;i++) dd[i]=0;
        if (n==0) return 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=6;j++)
            {
                int so;
                cin>>so;
                dd[so]=1;
            }
        }
        if (check()) cout<<"Yes";
        else cout<<"No";
        cout<<endl;

    }
	return 0;
}
