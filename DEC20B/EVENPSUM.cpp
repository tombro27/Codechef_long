#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
    	ll a,b;
		cin>>a>>b;
		ll odd_a=a/2+(a%2!=0);
		ll even_a=a/2;
		ll odd_b=b/2+(b%2!=0);
		ll even_b=b/2;
		ll odd=odd_a*odd_b;
		ll even=even_a*even_b;
		long long int ans= odd + even;
		cout<<ans<<"\n";
	}
	return 0;
}