#include<iostream>
#include<stdbool.h>
#include<vector>
#include<windows.h>
#define pb push_back
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        vector<int> a,b;
        for(int i=0;i<n;i++)
        {
            int so;
            cin>>so;
            a.pb(so);
        }
        for(int i=0;i<n;i++)
        {
            int so;
            cin>>so;
            b.pb(so);
        }
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if (a[i]>a[j])
                {
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if (b[i]<b[j])
                {
                    int tmp=b[i];
                    b[i]=b[j];
                    b[j]=tmp;
                }
        bool kt=0;
        int vt1=0,vt2=0;
        for(int i=0;i<2*n;i++)
        {
            if (kt==0)
            {
                cout<<a[vt1]<<' ';
                vt1++;
            }
            else
            {
                cout<<b[vt2]<<' ';
                vt2++;
            }
            kt=!kt;
        }
        cout<<'\n';
    }
    //ssystem("pause");
    return 0;
}
