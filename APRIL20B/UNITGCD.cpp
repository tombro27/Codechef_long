#include<bits/stdc++.h>
using namespace std;
int main()
{	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	int t;
	int n,flag;
	cin>>t;
	for (int i =0;i<t;++i)
	{	cin>>n;
		if(n>3)
		{
		flag=1;
		cout<<n/2<<"\n";
		int j=2;
		cout<<3<<" "<<flag<<" ";
				cout<<++flag<<" ";
				cout<<++flag<<"\n";
		while(j<n/2)
		{
			
				cout<<2<<" "<<++flag<<" ";
				cout<<++flag<<"\n";
				j++;
				
			}
			if(n%2==0)
				cout<<1<<" "<<++flag<<"\n";
			else
			{
				cout<<2<<" "<<++flag<<" ";
				cout<<++flag<<"\n";
			}
		}
		else if(n==2)
		{	
			cout<<1<<"\n"<<1<<" "<<1<<" "<<2<<" "<<3<<"\n";
		}
		else if(n==2)
		{
			cout<<1<<"\n"<<1<<" "<<1<<" "<<2<<"\n";
		}
		else
			cout<<1<<"\n"<<1<<" "<<1<<"\n";
	}
	return 0;
}