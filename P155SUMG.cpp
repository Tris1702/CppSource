#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if (n>m) swap(n,m);
    if (n%2==0) cout<<"Wilshere";
    else cout<<"Xavi";
	return 0;
}
