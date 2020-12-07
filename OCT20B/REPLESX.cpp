#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,p,k;
        cin>>n>>x>>p>>k;
        int a[n];
        int temp;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int count = 0;
        if (!binary_search(a, a+n, x)) {
            a[k-1] = x;
            count++;
            sort(a,a+n);
        }
        if(a[p-1]==x) {
            cout<<count+0<<"\n";
            continue;
        }
        else if(p<k && a[p-1]<x) {
            cout<<-1<<"\n";
            continue;
        }
        else if(p>k && a[p-1]>x) {
            cout<<-1<<"\n";
            continue;
        }
        int ind,min=n+1;
        for(int i=0;i<n;i++){
            if(a[i]==x && abs(p-i)<min) 
            {
                min=abs(p-i);
                ind=i;
            }
        }
        cout << abs(p-1-ind)+count<<"\n";
    }
    return 0;
}