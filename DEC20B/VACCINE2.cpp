#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n, d, a, r=0, nr=0;
    	cin>>n>>d;
        for(int i=0;i<n;++i)
        {
            cin>>a;
            if(a>=80||a<=9)
                r++;
            else
                nr++;
        }
        int ans= ceil((float)r/d)+ceil((float)nr/d);
        cout<<ans<<"\n";
	}
	return 0;
}