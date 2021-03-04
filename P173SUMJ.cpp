#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,dem=0;
        int dd[101]={};
        vector<int> luu;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int so;
            cin>>so;
            if (dd[so]==0) luu.push_back(so);
            dd[so]++;
        }
        for(int i=0;i<luu.size();i++)
            if (dd[luu[i]]>=4)
        {
            dem+=dd[luu[i]]/4;
            dd[luu[i]]%=4;
        }
        int tmp=0;
        for(int i=0;i<luu.size();i++)
            if (dd[luu[i]]>=2) tmp++;
        dem+=tmp/2;
        cout<<dem<<endl;
    }
	return 0;
}
