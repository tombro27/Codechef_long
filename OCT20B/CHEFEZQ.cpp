#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll sum=0,temp;
        ll result;
        bool flag=false;
        for(ll i=0;i<n;++i)
        {
            cin>>temp;
            sum+=temp;
            if(sum<k)
            {    sum=0;
                if(flag==false)
                {
                    result=i+1;
                    flag=true;
                }
            } 
            else
                sum-=k;
        }
        if(flag==false){
            result=ceil(sum/k)+n+1;
        }
        cout<<result<<"\n";
    }

    return 0;
}
