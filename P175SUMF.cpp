#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
vector<int> luu;
void prepare()
{
    long long n=1,tmp=0;
    while (tmp<1e9)
    {
        n++;
        tmp=n*(n-1)/2;
        luu.push_back(tmp);
    }
}
int main()
{
    prepare();
    int n;
    cin>>n;
    for(int i=0;i<luu.size();i++)
        if (luu[i]<=n)
        {
            int tmp=(n-luu[i])*2;
            int x1=sqrt(tmp);
            if (x1>0)
            {
                int x2=tmp/x1;
                if (x1*x2==tmp&&fabs(x1-x2)==1)
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
        else break;
    cout<<"NO";
	return 0;
}
