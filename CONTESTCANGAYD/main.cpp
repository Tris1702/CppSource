#include <bits/stdc++.h>

using namespace std;
struct vt
{
    unsigned long long kta,ktb,dd;
    vt()
    {
        kta=ktb=dd=0;
    }
};
vector<vt> F(93);
unsigned long long resa=0,resb=0;
void prepare()
{
    F[0].kta=1;F[0].ktb=0;F[0].dd=1;
    F[1].kta=0;F[1].ktb=1;F[1].dd=1;
    for(int i=2;i<=92;i++)
    {
        F[i].kta=F[i-1].kta+F[i-2].kta;
        F[i].ktb=F[i-1].ktb+F[i-2].ktb;
        F[i].dd=F[i-1].dd+F[i-2].dd;
    }
}
void truyhoi(int n,unsigned long long vt)
{
    if (vt==F[n].dd)
    {
        resa+=F[n].kta;
        resb+=F[n].ktb;
        return;
    }
    if (vt>F[n-2].dd)
    {
        resa+=F[n-2].kta;
        resb+=F[n-2].ktb;
        truyhoi(n-1,vt-F[n-2].dd);
    }
    else truyhoi(n-2,vt);
}
int main()
{
    prepare();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        unsigned long long k;
        resa=resb=0;
        cin>>n>>k;
        truyhoi(n,k);
        cout<<resa<<' '<<resb<<endl;
    }
    return 0;
}
