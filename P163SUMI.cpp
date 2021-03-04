#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string chuyen(int so)
{
    string res="";
    while (so>0)
    {
        char c=so%10+'0';
        res=c+res;
        so/=10;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    string tests="";
    for(int i=1;i<=1500;i++) tests=tests+chuyen(i);
    cout<<tests[n-1]<<endl;
	return 0;
}
