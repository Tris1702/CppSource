#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    vector<int> F[10];
    int a[10]={2,7,2,3,3,4,2,5,1,2};
    int res1,res2;
    string n;
    cin>>n;
    res1=a[n[0]-'0'];
    res2=a[n[1]-'0'];
    cout<<res1*res2;
	return 0;
}
