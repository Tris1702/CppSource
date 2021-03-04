#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    cin.ignore();
    for(int t=1;t<=T;t++)
    {
        string s;
        getline(cin,s);
        if (s=="dung") cout<<2;
        if (s=="lon hon") cout<<1;
        if (s=="nho hon") cout<<3;
        cout<<endl;
    }
	return 0;
}
