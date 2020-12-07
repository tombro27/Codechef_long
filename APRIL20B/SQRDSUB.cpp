#include<bits/stdc++.h>
using namespace std;
int count(unsigned int arr[], unsigned int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		int prod=arr[i];
		if(arr[i]%4==0)
		{
		 count+=n-i;   
		}
		else
		{if(arr[i]%2!=0)
			count++;
		for(int j=i+1;j<n;++j)
		{
			prod*=arr[j];
			if(prod%4==0)
			{
			    count+=n-j;
			    break;
			}
			else if(prod%2!=0)
			count++;
			}
		}	
	}
	return count;
}
int main()
{   ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	unsigned short int t;
	unsigned int n,cnt;
	cin>>t;
	for(int i=0;i<t;++i)
	{	cin>>n;
		unsigned int *p=new unsigned int[n];
		for(int j=0;j<n;++j)
		{
			cin>>p[j];
		}
		cout<<count(p,n)<<"\n";
		delete[] p;
	}

	return 0;
}