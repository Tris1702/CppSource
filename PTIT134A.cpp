#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    while( cin>>s)
    {
        int dd[250]={},dem=0;
        for(int i=0;i<s.length();i++)
            dd[s[i]]++;
        for(int i='a';i<='z';i++)
            if (dd[i]%2!=0) dem++;
        if (dem%2!=0||dem==0) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
	return 0;
}
