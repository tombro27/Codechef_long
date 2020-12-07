#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t)
    {
        long long int n,s=0,d;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        for(long long int i=0;i<n-1;++i)
        {   d=0;
            if(arr[i]<arr[i+1])
            d=arr[i+1]-arr[i]-1;
            else if(arr[i]>arr[i+1])
            d=arr[i]-arr[i+1]-1;
            else
            d=0;
            s=s+d;
        }
        cout<<s<<"\n";
        t--;
    }
    return 0;
}