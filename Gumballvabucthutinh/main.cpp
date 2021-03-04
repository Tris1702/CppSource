#include <bits/stdc++.h>

using namespace std;
struct data
{
    int cs;
    int vt;
};
vector<data> s;
vector<unsigned long long> F;
unsigned long long poww(unsigned long long a,int b)
{
    unsigned long long res=1;
    for(int i=b;i;i>>=1)
    {
        if (i&1) res*=a;
        a*=a;
    }
    return res;
}
void prepare()
{
    //tao so hay ho
    unsigned long long a=7;
    F.push_back(a);
    int vt=4;
    for(int i=1;i<=31;i++)
    {
        //chi tao den so thu 31 vi gioi han dap an chi tao ra so khong qua 20 chu so
        a+=poww(2,vt);
        a<<=1;
        a+=1;
        vt+=2;
        F.push_back(a);
    }
}
bool cmp(data a, data b)
{
    return ((a.cs<b.cs)||(a.cs==b.cs&&a.vt<b.vt));
}

int bisearch(int l,int r,int val,int vt)
{
    int index=-1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (s[mid].cs==val)
        {
            if (index==-1||s[mid].vt<vt) index=s[mid].vt;
            if (index>=vt) r=mid-1;
            if (index<vt) l=mid+1;
        }
        else
        {
            if (s[mid].cs>val) r=mid-1;
            else l=mid+1;
        }
    }
    return index;
}
bool kt(int a)
{
    int vt=s.size();
    while (a>0)
    {
        int vttmp=bisearch(0,s.size()-1,a%10,vt);
        if (vttmp==-1||vttmp>=vt) return 0;
        a/=10;
        vt=vttmp;
    }
    return 1;
}
int scs(unsigned long long a)
{
    if (a==0) return 1;
    int tmp=0;
    while (a>0)
    {
        tmp++;
        a/=10;
    }
    return tmp;
}
int main()
{
    /*prepare();
    string stmp;
    cin>>stmp;
    while (stmp[0]>='a'&&stmp[0]<='z')
    {
        int tmp=stmp[0]-'a';
        if (tmp==0) stmp+='0';
        while (tmp>0)
        {
            stmp+=(char)(tmp%10+'0');
            tmp/=10;
        }
        stmp.erase(0,1);
    }
    cout<<stmp<<endl;
    for(int i=0;i<stmp.length();i++)
    {
        data tmp;
        tmp.cs=stmp[i]-'0';
        tmp.vt=i;
        s.push_back(tmp);
    }
    sort(s.begin(),s.end(),cmp);
    bool ok=1;
    for(int i=F.size()-1;i>=0;i--)
    {
        if (scs(F[i])>s.size()) continue;
        if (kt(F[i]))
        {
            ok=0;
            cout<<F[i];
            break;
        }
    }
    if (ok) cout<<-1;*/
    freopen("vao.inp","w",stdout);
    for(int i=1;i<=10;i++)
    {
        char c='a'+(rand() % 26 + 0);
        cout<<c;
    }
    return 0;
}
