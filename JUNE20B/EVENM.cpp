#include<bits/stdc++.h>
using namespace std;
void matrixprint(int n)
{
	int num;
	for(int i=1;i<n+1;++i)
	{
		if(i%2!=0)
		{
			num=(i-1)*n+1;
			for(int j=0;j<n;++j)
			cout<<num++<<"\t";
		}
		else
		{
			num=i*n;
			for(int j=0;j<n;++j)
			cout<<num--<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;++i)
	{	
		int n;
		cin>>n;
		matrixprint(n);
	}
	return 0;
}