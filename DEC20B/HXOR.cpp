#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x, a[n];
        cin>>x;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        int i=0;
        while(x)
        {   
            if(i==n-1)
                break;
            if(a[i]==0)
                i++;
            else
            {   int p=(int)log2(a[i]);
                int num=pow(2,p);
                int j=i+1;
                for(;j<n-1;++j)
                    if((a[j]^num) < a[j])
                        break;
                a[i]^=num;
                a[j]^=num;
                x--;
            }
            
        }
        if(x>0&&n==2)
            if(x%2!=0)
            {   a[n-1]^=1;
                a[n-2]^=1;
            }
        for(int i=0;i<n;++i)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}