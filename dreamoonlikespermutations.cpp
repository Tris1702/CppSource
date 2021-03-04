#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int n,maxx=0;
		cin>>n;
		vector<int> a,dd(n+1,0), dd1(n+1,0);
		for(int i=1;i<=n;i++)
		{
			int so;
			cin>>so;
			a.push_back(so);
			dd[so]++;
			dd1[so]++;
			maxx=max(maxx,so);
		}
		bool ok=1;
		int dem1=0,dem2=0;
		for(int i=1;i<=maxx;i++)
		{
			if (dd[i]>=3||dd[i]==0) 
				ok=0;
			if (dd[i]==2)
			{
				dem1++;
				dem2++;
			}
		}
		int count=0;
		for(int i=1;i<=maxx;i++)
		{
			if (dd[i]==1&&count<dem1) 
				{
					ok=0;
					break;
				}
			if (dd[i]==2) count++;
		}
		if (ok&&dd[1]==2)
		{
			vector<int> luu;
			int l1=0;
			maxx=0;
			for(int i=0;i<n;i++)
			{
				if (dd[a[i]]==2) 
				{
					dd[a[i]]--;
					dem1--;
					l1++;
				}
				else 
				{
					if (l1>0&&dem1==0) luu.push_back(l1);
					break;
				}
			}
			l1=n;
			maxx=0;
			for(int i=n-1;i>=0;i--)
			{
				if (dd1[a[i]]==2) 
				{
					dd1[a[i]]--;
					dem2--;
					l1--;
				}
				else
				{
					if (l1<n&&dem2==0) luu.push_back(l1);
					break;	
				} 
			}
			int dem=0;
			sort(luu.begin(),luu.end());
			for(int i=0;i<luu.size();i++)
				if (i==0||i>0&&luu[i]!=luu[i-1]) dem++;
					
			cout<<dem<<endl;
			for(int i=0;i<luu.size();i++)
				if (i==0||i>0&&luu[i]!=luu[i-1])
					cout<<luu[i]<<' '<<n-luu[i]<<endl;
		}
		else cout<<0<<endl;
	}
	return 0;
}