#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,a[9]={500,200,100,50,20,10,5,2,1};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int res=0,j=-1,tien;
        cin>>tien;
        while(tien>0)
        {
            j++;
            int tmp=tien/a[j];
            res+=tmp;
            tien-=a[j]*tmp;
        }
        cout<<res<<endl;
    }
	return 0;
}
