#include<bits/stdc++.h>

using namespace std;
struct diem
{
    unsigned long long x,y;
    diem()
    {
        x=y=0;
    }
};
vector< vector<int> > hv;
vector<int> pt;
void prepare()
{
    pt.resize(3);
    //0 0 0
    pt[0]=pt[1]=pt[2]=0;
    hv.push_back(pt);
    //1 1 1
    pt[0]=pt[1]=pt[2]=1;
    hv.push_back(pt);
    //2 2 2
    pt[0]=pt[1]=pt[2]=2;
    hv.push_back(pt);
    //0 1 2
    pt[0]=0;pt[1]=1;pt[2]=2;
    hv.push_back(pt);
    //0 2 1
    pt[0]=0;pt[1]=2;pt[2]=1;
    hv.push_back(pt);
    //1 0 2
    pt[0]=1;pt[1]=0;pt[2]=2;
    hv.push_back(pt);
    //2 0 1
    pt[0]=2;pt[1]=0;pt[2]=1;
    hv.push_back(pt);
    //1 2 0
    pt[0]=1;pt[1]=2;pt[2]=0;
    hv.push_back(pt);
    //2 1 0
    pt[0]=2;pt[1]=1;pt[2]=0;
    hv.push_back(pt);
}
bool cmp(diem a,diem b)
{
    if (a.x>b.x) return 1;
    if (a.x==b.x&&a.y>b.y) return 1;
    return 0;
}
long long th(int n)
{
    if (n<=2) return 0;
    int tmp1=n-3,tmp2=n-2,tmp3=n;
    if (tmp1%3==0) tmp1/=3;
    if (tmp2%3==0) tmp2/=3;
    if (tmp3%3==0) tmp3/=3;

    if (tmp1%2==0) tmp1/=2;
    else tmp2/=2;
    return tmp1*tmp2*tmp3;
}
int main()
{
    prepare();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,a,b,c,d,mod;
        long long res=0;
        diem tmp;
        int p[3][3]={};
        vector<diem> x;
        cin>>n>>a>>b>>c>>d>>tmp.x>>tmp.y>>mod;
        x.push_back(tmp);
        p[tmp.x%3][tmp.y%3]++;
        for(int i=1;i<n;i++)
        {
            tmp.x=(a*x[i-1].x+b) % mod;
            tmp.y=(c*x[i-1].y+d) % mod;
            x.push_back(tmp);
            unsigned int d1=tmp.x%3,d2=tmp.y%3;
            p[d1][d2]++;
            //cout<<tmp.x<<' '<<tmp.y<<' '<<tmp.x%3<<' '<<tmp.y%3<<endl;
        }
        sort(x.begin(),x.end(),cmp);
        /*for(int i=0;i<=3;i++)
            for(int j=3;j<9;j++)
            {
                for(int k=0;k<3;k++)
                    cout<<hv[i][k]<<'-'<<hv[j][k]<<':'<<p[hv[i][k]][hv[j][k]]<<'|';
                cout<<endl;
            }*/
        for(int i=0;i<=3;i++)
        {
            int q=9;
            if (i<=2) q=4;
            for(int j=3;j<q;j++)
            {
                int tmp=1;
                for(int k=0;k<3;k++)
                    tmp*=p[hv[i][k]][hv[j][k]];
                res+=tmp;
            }
        }
        unsigned int vt=0;
        while (vt<x.size())
        {
            int tmp=vt;
            while (vt<x.size()-1&&x[vt].x==x[vt+1].x&&x[vt].y==x[vt+1].y) vt++;
            if (vt-tmp+1>=3)
            {
                res++;
                unsigned int d1=x[vt].x%3,d2=x[vt].y%3;
                p[d1][d2]-=vt-tmp+1;
                p[d1][d2]+=2;
            }
            vt++;
        }
        for(int i=0;i<=2;i++)
            for(int k=0;k<3;k++) res+=th(p[hv[i][k]][hv[i][k]]);
        cout<<res<<endl;
    }
    return 0;
}
