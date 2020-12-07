#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {   
        int n,k,x,y,p;
        bool chk=false;
        cin>>n>>k>>x>>y;
        p=(x+k)%n;
        while(p!=x){
            if(p==y){
                chk=true;
                cout<<"YES\n";
                break;
            }
            p+=k;
            p%=n;
        }
        if(!chk){if(x==y)
                cout<<"YES\n";
            else
                cout<<"NO\n";}
    }

    return 0;
}