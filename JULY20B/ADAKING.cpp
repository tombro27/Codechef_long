#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int q =0;q<t;++q)
	{
		int k;
		cin>>k;
		char chess[8][8];
		std::fill(chess[0],chess[8],'.');
		chess[0][0]='O';
		int c=k/8;
		if(k<8)
		{
			chess[0][k]='X';
			for(int j=0;j<=k;++j)
				chess[1][j]='X';
		}
		else if(k%8==0)
		{
			for(int j=0;j<8;j++)
			chess[c][j]='X';
		}
		else
		{
			int r=k-(8*c)-1;
			for(int j=r+1;j<9;++j)
				chess[c][j]='X';
			for(int j=0;j<=r+1;++j)
				chess[c+1][j]='X';	
		}
		
		
		for(int l=0;l<8;++l)
		{
		for(int j=0;j<8;++j)
		cout<<chess[l][j];
		cout<<"\n";
		}
	}
	return 0;
}