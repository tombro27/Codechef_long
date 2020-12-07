#include<bits/stdc++.h>
using namespace std; 
int degrade(int res)
	{
		int l;
		l=log2(res+1);
		if(pow(2,l)<res)
			l++;
		res=pow(2,l-1)-1;
    	return res;
	}
int func(long long int z,long long int r)
{	long long int res=0;
	int flag=0;
	int len=log2(z+1);
	if(pow(2,len)<z)
		len++;
	int binary_z[len]={0};
	int binary_r[len]={0};
	int binary_res[len]={0};
	long long int num;
	num=z;
 	int it=len-1,k;
 				
 	while(num!=0)
		{
  			k = num%2;
  			binary_z[it--] = k;
  			num /= 2;
		}
	num=r;it=len-1;
	while(num!=0)
		{
  			k = num%2;
  			binary_r[it--] = k;
  			num /= 2;
		}	
	
	for(int j=0;j<len;++j)
		{	if(flag==0)
				{
						
					if(binary_z[j]==1&&binary_r[j]==1)
						{
							binary_res[j]=1;
							res+=pow(2,len-j-1);
						}
					else if(binary_z[j]==0&&binary_r[j]==1)
							{
								binary_res[j]=0;
								flag++;
							}
					else
						binary_res[j]=0;	
				}
			else
				{
					binary_res[j]=binary_z[j];
					if(binary_z[j]==1)
						res+=pow(2,len-j-1);
								
				}
					
		}
					
					return res;
}	
int main()
{
	int t;
	cin>>t;
	long long int *res=new long long int[t];
	for(int i=0;i<t;++i)
	{	res[i]=0;
		long long int x,y,l,r,z,max;
		cin>>x>>y>>l>>r;
		z=x|y;
		if(x==0||y==0)
		{	
			res[i]=l;
		}
		else
		{
			if(z>=l&&z<=r)
			{
				res[i]=z;
			}
			else
			{	long long int max=l,val,v,m;
				for(long long int ir=r, ite=0;ite<2;++ite)
				{	
					val=func(z,ir);
					v=(val&x)*(val&y);
					if(v!=0)
					break;
					ir=degrade(ir);
				}
				res[i]=val;
			}
		}
	}
	for(int i=0;i<t;++i)
		cout<<res[i]<<"\n";
	return 0;
}
 			
