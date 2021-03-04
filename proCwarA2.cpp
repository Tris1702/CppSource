#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n;
    vector<int> luu;
    cin>>n;
    FORT(i,1,n)
        FORT(j,1,n)
        {
            int so;
            cin>>so;
            luu.push_back(so);
        }
    sort(luu.begin(),luu.end());
    int a[n+1][n+1]={},k=0;
    FORT(i,1,n)
    {
        if (i%2)
            FORT(j,1,n)
            {
                a[i][j]=luu[k];
                k++;
            }
        else
            FORD(j,n,1)
            {
                a[i][j]=luu[k];
                k++;
            }
    }
    FORT(i,1,n)
    {
        FORT(j,1,n) cout<<a[i][j]<<' ';
        cout<<endl;
    }
	return 0;
}
