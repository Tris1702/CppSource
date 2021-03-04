#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long F[7]={6,28,496,8128,33550336,8589869056,137438691328};
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long n;
        cin>>n;
        bool check=0;
        for(int i=0;i<7;i++)
            if (F[i]==n)
        {
            cout<<1<<endl;
            check=1;
            break;
        }
        if (check==0) cout<<0<<endl;
    }
	return 0;
}
