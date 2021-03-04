#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
struct dx
{
    string mat;
    int xh;
    dx()
    {
        mat="";
        xh=0;
    }
};
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s;
        vector<dx> x(8);
        x[0].mat="TTT";
        x[1].mat="TTH";
        x[2].mat="THT";
        x[3].mat="THH";
        x[4].mat="HTT";
        x[5].mat="HTH";
        x[6].mat="HHT";
        x[7].mat="HHH";
        int tt;
        cin>>tt>>s;
        for(int i=0;i<8;i++)
            for(int j=0;j<s.length()-2;j++)
                if (s[j]==x[i].mat[0]&&s[j+1]==x[i].mat[1]&&s[j+2]==x[i].mat[2]) x[i].xh++;
        cout<<tt<<' ';
        for(int i=0;i<8;i++) cout<<x[i].xh<<' ';
        cout<<endl;
    }
	return 0;
}
