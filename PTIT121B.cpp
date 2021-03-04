#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[17]={},n;
void in()
{
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
void sinh(int vt)
{
    if (vt>n) in();
    else
        if (a[vt]==1)
        {
            sinh(vt+1);
            a[vt]=0;
            sinh(vt+1);
        }
        else
        {
            sinh(vt+1);
            a[vt]=1;
            sinh(vt+1);
        }
}
int main()
{
    cin>>n;
    sinh(1);
	return 0;
}
