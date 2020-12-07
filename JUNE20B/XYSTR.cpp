#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int res[t];
	for(int i=0;i<t;++i)
	{	int c=0;
		string str;
		getline(cin, str);
		while (str.length()==0 ) 
            getline(cin, str); 
		std::string::iterator it,it1;
		it1=str.begin();
		++it1;
		for(it=str.begin();it!=str.end()&&it1!=str.end();++it)
		{
			if(*it!=*it1)
			{
				c++;
				it++;
				it1++;
			}
			it1++;	
		}
		res[i]=c;
	}
	for(int i=0;i<t;++i)
	cout<<res[i]<<"\n";
	return 0;
}