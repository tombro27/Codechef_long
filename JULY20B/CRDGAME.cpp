#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i =0;i<t;++i)
	{
		int n;
		cin>>n;
		int a,b,A=0,B=0;
		for(int j=0;j<n;++j)
		{   int Pa=0,Pb=0;
			cin>>a>>b;
			while(a||b)
			{
				Pa+=a%10;
				a/=10;
				Pb+=b%10;
				b/=10;	
			}
			if(Pa>Pb)
			{
				A++;
			}
			else if(Pa<Pb)
			{
				B++;
			}
			else
			{
				A++;
				B++;
			}
		}
		if(A>B)
		cout<<0<<" "<<A<<"\n";
		else if(A<B)
		cout<<1<<" "<<B<<"\n";
		else
		cout<<2<<" "<<A<<"\n";
	}
	return 0;
}