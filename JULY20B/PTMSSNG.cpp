#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin>>t;
    for (int i = 0; i <t ; ++i)
    {
        int n,x,y;
        std::cin>>n;
        std::map<int,int> mpo,mpe;
        for (int j = 0; j <4*n-1 ; ++j)
        {
            std::cin>>x>>y;
            if(mpo.count(x))
            {
                mpo.erase(x);
            }
            else
            {
                mpo.insert(std::pair<int,int>(x,1));
            }

            if(mpe.count(y))
            {
                mpe.erase(y);
            }
            else
            {
                mpe.insert(std::pair<int,int>(y,1));
            }
        }
        std::map<int,int>::iterator it =mpo.begin();
        x=it->first;
        std::map<int,int>::iterator it2 =mpe.begin();
        y=it2->first;

        std::cout<<x<<" "<<y<<"\n";

        }
    return 0;
}
