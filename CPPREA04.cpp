#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        vector<int> a;
        for(int i=1;i<=n;i++)
        {
            int so;
            cin>>so;
            a.push_back(so);
        }
        sort(a.begin(),a.end());
        int d=0,c=a.size()-1;
        while (d<c)
        {
            cout<<a[d]<<' '<<a[c]<<' ';
            d++;
            c--;
        }
        if (d==c) cout<<a[d];
        cout<<endl;
    }
	return 0;
}
