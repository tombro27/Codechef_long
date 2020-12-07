#include<bits/stdc++.h>
using namespace std;
int Count(int arr[], int n) 
{ 
	int count = 0; 
	vector<bool> visited(n,false); 
	pair<int, int> mp[n]; 
	for(int i=0;i<n;i++) 
	{ 
		mp[i].first = arr[i]; 
		mp[i].second = i; 
	} 
	sort(mp, mp+n); 
	for(int i=0;i<n;i++) 
	{ 
	
		if(visited[i]||mp[i].second==i) 
			continue; 
		int len=0; 
		int j=i; 
		while(!visited[j]) 
		{ 
			visited[j] = 1; 
			j=mp[j].second; 
			len++; 
		} 
        if(len>1) 
			count+=(len-1); 
	} 
	return count; 
} 

int main()
{
	int t;
	cin>>t;
	int res[t]={0};
	for(int k=0;k<t;++k)
	{
		int n,m,a,b;
		cin>>n>>m;
		int arr[n];	
		for(int j=0;j<n;++j)
			{
				cin>>arr[j];
			}
		for(int j=0;j<m;++j)
		{
			cin>>a>>b;
				}	
		res[k]=Count(arr,n);
					
	}
	for(int k=0;k<t;++k)
	cout<<res[k]<<"\n";
	return 0;
}