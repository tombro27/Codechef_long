#include<bits/stdc++.h>
using namespace std;
int main()
{
	short unsigned int t,n,flag,count;
	cin>>t;
	bool *res=new bool[t];
	for(int i=0;i<t;++i)
	{	res[i]=1;
		count=0;
		flag=0;
		cin>>n;
		bool *p=new bool [n];
		for(int j=0;j<n;++j)
		{
			cin>>p[j];
			if(p[j]==0)
				flag++;
			else 
				{	
					++count;
					if(flag<=4 && count>=2)
						{
							res[i]=0;
						}
					flag=0;	
				}
		}
		if(res[i]==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		delete[] p;
	}
	
	delete[] res;
	return 0;	
}