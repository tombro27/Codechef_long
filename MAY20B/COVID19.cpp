#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,flag;
	cin>>t;
	for(int i=0;i<t;++i)
	{	flag=1;
		int max,min;
		cin>>n;
		int *p=new int[n];
		for(int j=0;j<n;++j)
		{
			cin>>p[j];
			if(j>0&&p[j]-p[j-1]>2)
			flag++;
		}
		//cout<<flag<<endl;
		int f=0;
		int r[flag];
		std::fill_n (r, flag, 1);
		/*	for(int j=0;j<flag;++j)
		{
			cout<<r[j]<<":";
		}*/
		for(int j=1;j<n;++j)
		{
			if(p[j]-p[j-1]<3)
			{
			r[f]++;
			}
			else
			{
				
				
				f++;
			}
			
		}
		max=r[0];
		min=r[0];
		for(int j=1;j<flag;++j)
		{	if(r[j]>max)
			{
				max=r[j];
			}
			if(r[j]<min)
			min=r[j];
			
		}
	
		cout<<min<<" "<<max<<"\n";
		delete[] p;
	}
	return 0;
}