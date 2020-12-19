#include <iostream>
using namespace std;

int main() 
{
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int res;
    for(int i=1;;++i)
    {
        if(i>=d1)
            p-=v1;
        if(i>=d2)
            p-=v2;
        if(p<=0)
            {
                res=i;
                break;
            }
            
    }
    cout<<res;
	return 0;
}
