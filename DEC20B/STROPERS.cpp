#include <bits/stdc++.h>
#define ii pair<int,int>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) 
    {
    	string s;
        cin>>s;
        int len=s.size();
        int res=0;
        vector<int> a;
        for(int i=0;i<len;++i)
        {   
            a.clear();
            int j=i+1;
            set<pair<ii,ii >> C;            
            int num=0, cnt=0;
            int temp=0,temp2=0,temp3=0,temp4=0,temp5=0;
            for(int g=0;g<j;g++)
            {
                if(s[g]=='1')
                {
                    a.push_back(num);
                    num=0;
                    cnt++;
                    temp++;                    
                }
                else
                {
                    if (cnt%2==0)
                        temp4++;
                    else
                        temp3++;
                    num++;
                    temp2++;
                }
            }
            a.push_back(num);
            ii p1= make_pair(temp,temp2);   
            ii p2= make_pair(temp3,temp4);
            C.insert(make_pair(p1,p2));
            for(int g=j;g<len;g++)
            {
                if(s[g-j]=='0')
                {   
                    temp4--;
                    temp2--;
                    a[0]--;                    
                }
                else
                {
                    a.erase(a.begin());
                    int t=temp4;
                    temp4=temp3;
                    temp3=t;
                    temp--;
                }             
                if(s[g]=='0')
                {
                    temp2++;
                    a[a.size()-1]++;
                    if(a.size()%2==1)
                    {
                        temp4++;
                    }
                    else
                    {
                        temp3++;
                    }
                }
                 else
                {
                    temp++;
                    a.push_back(0);
                }
                p1=make_pair(temp,temp2);
                p2=make_pair(temp3,temp4);
                C.insert(make_pair(p1,p2));
            }
            res=res+C.size();
        }
        cout<<res<<"\n";
	}
	return 0;
}