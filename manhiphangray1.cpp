#include<iostream>
#include<string>
#include<vector>
#include<math.h>
 
using namespace std;
int n;
vector<int> a;
void in()
{
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<' ';
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
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n;
        a.clear();
        a.resize(n+1);
        sinh(1);
        cout<<endl;
    }
	return 0;
}