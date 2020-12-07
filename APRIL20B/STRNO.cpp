#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	unsigned short int t;
	unsigned int x, k,count;
	cin>>t;
	short int *res= new short int[t];
	for(int i=0;i<t;++i)
	{	cin>>x>>k;
		count=1;
		int j=2;
		int temp=x;
		while(j<=sqrt(temp)&&count!=k)
		{
			if(temp%j==0)
			{	temp/=j;
				++count;
			}
			else
			{
				if(j==2)
					++j;
				else
					j+=2;	
			}
		}
		if(count==k)
			res[i]=1;
		else
			res[i]=0;		
	cout<<res[i]<<" ";		
	}
	delete[] res;	
	return 0;
}