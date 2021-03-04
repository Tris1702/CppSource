#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
using namespace std;
vector<long long> F;
void prepare()
{
    queue<long long> q;
    q.push(9);
    F.push_back(9);
    for(int i=2;i<=16;i++)
    {
        int n=q.size();
        while(n>0)
        {
            long long tmp=q.front();
            q.pop();
            tmp=tmp*10;
            F.push_back(tmp);
            q.push(tmp);
            tmp+=9;
            F.push_back(tmp);
            q.push(tmp);
            n--;
        }
    }
}
int main()
{
    prepare();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        for(int i=0;i<F.size();i++)
            if(F[i]%n==0)
        {
            cout<<F[i]<<endl;
            break;
        }
    }
	return 0;
}
