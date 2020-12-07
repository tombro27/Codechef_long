#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{	
	unsigned short int t,n,m,k,flag, *temp,residue=0;
	cin>>t;
	for(short int i=0;i<t;++i)
	{	
		cin>>n>>m>>k;
		unsigned short int *ary= new unsigned short int[n * k];
		unsigned short int *res= new unsigned short int[n];
		unsigned short int arr[m]={0};
		for(short int p=0;p<n;++p)
		{	unsigned short int arr[m]={0};
			temp=&residue;
			for(short int q=0;q<k;++q)
				{
					cin>>ary[q*n + p];
					flag=ary[q*n + p];
					++arr[flag-1];
					if(*temp<arr[flag-1])
						{
						temp=&arr[flag-1];
						res[p]=flag;
						}
				}
		}
		for(short int p=0;p<n;++p)
		cout<<res[p]<<" ";
		delete[] res;
		delete[] ary;
	}
	return 0;
}