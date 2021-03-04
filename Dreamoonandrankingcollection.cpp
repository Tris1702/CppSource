#include<bits/stdc++.h>

using namespace std;
int main()
{
	int T;
	cin>>T;
	for (int t = 0; t < T; t++)
	{
		int n, x;
		cin>>n>>x;
		bool dd[101]={};
		vector<int> a;
		for(int i=1; i<=n;i++)
		{
			int so;
			cin>>so;
			if (dd[so]==0) a.push_back(so);
			dd[so]=1;
		}
		sort(a.begin(),a.end());
		int vt=0;
		for(int i=1;i<=200;i++)
		{
			if (vt<a.size()&&i==a[vt]) 
			{
				vt++;
				continue;
			}
			if (x==0) 
			{
				cout<<i-1<<endl;
				break;
			}
			x--;
		}
	}
	return 0;
}