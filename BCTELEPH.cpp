#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        vector<string> x(n,"");
        map <string,bool> dd;
        dd.clear();
        for(int i=1;i<=n;i++)
        {
            cin>>x[i-1];
            dd[x[i-1]]=1;
        }
        bool dung=0;
        for(int i=0;i<n;i++)
        {
            if  (dung) break;
            string tmp="";
            for(int j=0;j<x[i].length()-1;j++)
            {
                tmp=tmp+x[i][j];
                bool l=dd[tmp];
                if (dd[tmp])
                {
                    cout<<"NO"<<endl;
                    dung=1;
                    break;
                }
            }
        }
        if (dung==0) cout<<"YES"<<endl;
    }
	return 0;
}
