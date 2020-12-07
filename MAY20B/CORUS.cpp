#include<bits/stdc++.h>
using namespace std;
int main()
{	int t, n, q;
	cin>>t;
	for(int e=0;e<t;++e)
	{
		cin>>n>>q;
		int res[q];
		char s[n];
		std::cin>>s;
	
		std::map<char, int> mp;
		for(int i=0;i<n;++i)
		{
			char c=s[i];
		
			if(mp.count(c))
			{
				int cnt=mp[c];
				mp[c]=++cnt;
			}
			else
			{
				mp.insert(std::pair<char,int>(c,1));
			}
		}
		for(int i=0;i<q;++i)
		{	int count=0;
			int qu;
			std::cin>>qu;
			for(std::map<char,int>::iterator it =mp.begin();it!=mp.end();it++)
			{
				if(it->second>qu)
				count+=it->second-qu;
			}
			res[i]=count;
		}
		for(int i=0;i<q;++i)
		std::cout<<res[i]<<"\n";
	}
	
	

	return 0;
}