#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	unsigned long long int res[t];
	for(int i=0;i<t;++i)
	{	
		unsigned long long int temp,c=0;
		cin>>temp;
		while(temp%2==0)
		{
			temp=temp/2;
		}
		if(temp!=0)
		{
			c=temp/2;
		}
		res[i]=c;
	}
	for(int i=0;i<t;++i)
	{
		cout<<res[i]<<"\n";
	}
	return 0;
}