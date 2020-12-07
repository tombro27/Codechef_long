#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int res[t];
	std::fill_n(res,t,0);
	for(int i=0;i<t;++i)
	{	
		int n,n5=0,n10=0,n15=0;
		cin>>n;
		int q[n];
		for(int j=0;j<n;++j)
		{
			cin>>q[j];
			if(n5!=-1)
				if(q[j]==5)
				{
					n5++;
				}
				else if(q[j]==10)
				{	
					n10++;
					n5--;
					if(n5==-1)
					res[i]=1;	
				}
				else
				{
					if(n10>0)
					n10--;
					else
					n5-=2;
					if(n5<0)
					res[i]=1;
					n15++;
				}		
		}	
	}
	for(int i=0;i<t;++i)
	if(res[i]==0)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}