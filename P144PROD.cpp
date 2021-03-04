#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<string> F;
bool lh(string a, string b)
{
    while (a.length()>b.length()) b='0'+b;
    while (a.length()<b.length()) a='0'+a;
    return a>b;
}
int main()
{
    int t=0;
    while (1)
    {
        t++;
        int n;
        cin>>n;
        if (n==0) return 0;
        F.resize(0);
        string minn="",maxx="";
        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            F.push_back(s);
        }
        for(int i=0;i<F.size();i++)
        {
            if (maxx==""||lh(maxx,F[i])==0) maxx=F[i];
            if (minn==""||lh(minn,F[i])) minn=F[i];
        }
        while (minn[0]=='0') minn.erase(0,1);
        while (maxx[0]=='0') maxx.erase(0,1);
        cout<<"Case "<<t<<": ";
        if (minn!=maxx) cout<<minn<<' '<<maxx<<endl;
        else cout<<"There is a row of trees having equal height."<<endl;
    }
	return 0;
}
