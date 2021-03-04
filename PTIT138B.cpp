#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
struct data
{
    string fname;
    string name;
    int age;
};
bool cmp(data a,data b)
{
    if (a.age>b.age||(a.age==b.age&&a.name<b.name)) return 1;
    return 0;
}
int main()
{
    int T;
    cin>>T;
    data cu;
    cu.name="Ted";

    FORT(t,1,T)
    {
        int n;
        cin>>n;
        vector<data> f(0);
        vector<string> person(0);
        vector<int> child(0);
        person.push_back("Ted");
        FORT(i,0,n-1)
        {
            data tmp;
            cin>>tmp.fname;
            cin>>tmp.name;
            cin>>tmp.age;
            f.push_back(tmp);
            if (ktlap(tmp.name)==0) person.push_back(tmp.name);
        }
        FORT(i,0,person.size()-1)
        {
            FORT(j,0,f.size()-1)
                if (f[j].fname==person[i]) child[i].push_back(j);
        }
        //tim tuoi
        queue<data> q;
        q.push();
        while (!q.empty())
        {
            FORT(i,0,person.size()-1)
                if (person[i]==q.front().)
                {
                    FORT(j,0,(int)child[i].size()-1)
                        f[child[i][j]].age=
                }
        }
        sort(f.begin(),f.end(),cmp);
        cout<<"DATASET "<<t<<endl;
        FORT(i,0,f.size()-1)
            cout<<f[i].name<<' '<<f[i].age<<endl;
    }
	return 0;
}
