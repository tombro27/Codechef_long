#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,p;
    	cin>>n>>k;
        int a[n];
        if(k>(n/2))
    	{   int z=n-k;
            for(int i=0;i<n;++i)
            {
                a[i]=i+1;
                if(i%2!=0 && z>0)
                {
                    a[i]*=-1;
                    z--;
                }
            }
        }
        else
        {   
            for(int i=0;i<n;++i)
    		{
                a[i]=-i-1;
                if(i%2!=0 && k>0)
                {
                    a[i]*=-1;
                    k--;
                }
            }
        }
    	
		 for(int i=0;i<n;++i)
            cout<<a[i]<<" ";
    cout<<"\n";
	}
	return 0;
}