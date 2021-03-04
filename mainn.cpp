#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
typedef long long ll;

struct point 
{
    ll x,y;
};
ll thang(point A, point B, point C)
{
    point K;//vector nAB
    K.x=A.y-B.y;
    K.y=B.x-A.x;
    // K.x * (x-A.x) + K.y * (y-A.y) =0
    return (K.x * (C.x-A.x) + K.y * (C.y-A.y));
}
void solve()
{
    // point A,B,C;
    // cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
    int n;
    while (1)
    {
        map<point ,int> mA,mB,mD;
        cin>>n;
        if (n==0) return;
        vector<point> a(n);
        ll B=0,D=0;
        FORT(i,0,n) cin>>a[i].x>>a[i].y;
        ll res=0;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
            {
                cout<<a[i].x<<' '<<a[i].y<<'|'<<a[j].x<<' '<<a[j].y<<endl;
                B=0; 
                D=0;
                for(int k=0;k<n;k++)
                {
                    
                    ll tmp= thang(a[i],a[j],a[k]);

                    if (tmp<0) B++;
                    else 
                        if (tmp>0) D++;
                }
                res+=B*D;
                
            }
        cout<<res/2<<endl;
    }
}
int main()
{
    solve();
}