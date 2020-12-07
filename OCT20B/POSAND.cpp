#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        
        int n;
        cin >> n;
        if(n>1&&(n&(n-1))==0)
        {
            cout<<-1;
        }
        else if(n==1)
        {
            cout<<1;
        }
        else
        {
            if(n>5)
            {
                int A[n]={2,3,1};
                for(int i=3;i<n;++i)
                {
                    A[i]=i+1;
                    if((A[i-1]&A[i-2])==0)
                    {
                        int b=A[i-1];
                        A[i-1]=A[i];
                        A[i]=b;
                    }
                }
                for(int i=0;i<n;++i)
                    cout<<A[i]<<" ";

            }

            else
            {
                int A[5]={2,3,1,5,4};
                for(int i=0;i<n;++i)
                    cout<<A[i]<<" ";
            }

        }
        cout<<"\n";
    }
    return 0;
}