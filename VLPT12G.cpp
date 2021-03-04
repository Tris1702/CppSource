#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
vector<int> F;
void prepare()
{
    int i=2;
    while ((long long) i*i<1e9)
    {
        int x=sqrt((i*i-1)*2);
        if (x*(x+1)==(i*i-1)*2) F.push_back(i*i-1);
        i++;
    }
}
int main()
{
    prepare();
    cout<<endl;
    int dem=0;
    while (1)
    {
        dem++;
        int res=0;
        int l,r;
        cin>>l>>r;
        if (l==0&&r==0) return 0;
        for(int i=0;i<F.size();i++)
            if (F[i]+1>l&&F[i]+1<r) res++;
        cout<<"Case "<<dem<<": "<<res<<endl;
    }
	return 0;
}
