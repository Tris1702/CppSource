#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mid=n+1,d,c;
    d=c=mid;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n*n+1;j++)
        if (j==d)
        {
            int so=0;
            for(int k=d;k<mid;k++)
            {
                cout<<so<<' ';
                so++;
            }
            for(int k=mid;k<=c;k++)
            {
                cout<<so<<' ';
                so--;
            }
            cout<<endl;
            break;
        }
        else cout<<' '<<' ';
        d--;
        c++;
    }
    int s=0;
    for(int i=d;i<mid;i++)
    {
        cout<<s<<' ';
        s++;
    }
    for(int i=mid;i<=c;i++)
    {
        cout<<s<<' ';
        s--;
    }
    cout<<endl;
    d++;
    c--;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n*n+1;j++)
        if (j==d)
        {
            int so=0;
            for(int k=d;k<mid;k++)
            {
                cout<<so<<' ';
                so++;
            }
            for(int k=mid;k<=c;k++)
            {
                cout<<so<<' ';
                so--;
            }
            cout<<endl;
            break;
        }
        else cout<<' '<<' ';
        d++;
        c--;
    }
	return 0;
}
