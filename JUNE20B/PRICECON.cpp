#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int p[t];
	for(int i=0;i<t;++i)
	{
		int n,k,num,c=0;
		cin>>n>>k;
		for(int j=0;j<n;++j)
		{
			cin>>num;
			if(num>k)
			{
				c+=num-k;
			}
		}
		p[i]=c;
	}
	for(int i=0;i<t;++i)
	{cout<<p[i]<<"\n";}
	return 0;
}