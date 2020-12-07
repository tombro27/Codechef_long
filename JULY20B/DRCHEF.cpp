#include<bits/stdc++.h>
#define li long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
 li t;
 cin>>t;
 for(li q=0;q<t;++q)
 {
    li n,x;
    cin>>n>>x;
    vector<li> a(n);
    for(li& i:a)
    cin>>i;
    sort(a.begin(),a.end());
    vector<li>::iterator it = lower_bound(a.begin(), a.end(), x);
    li low = it - a.begin();
    li d=0;
    for(li i=low;i<n;i++)
    {
    	if(x<a[i])
    	{
    		while(x<a[i])
    		{
    			x=2*x;
    			d++;
    		}
    		d++;
    	}
    	else
    	d++;
    	x=2*a[i];
    }
    li c=low+d;
    if(low!=0)
    {
    	d=0;
    	low--;
    	for(li i=low;i<n;i++)
    	{
    		if(x<a[i])
    		{
    			while(x<a[i])
    			{
    				x=2*x;
    				d++;
    			}
    			d++;
    		}
    		else
    		d++;
    		x=2*a[i];
    	}
    	cout<<min(d+low,c)<<"\n";
    }
    else
    cout<<c<<"\n";
 }
 return 0;
}