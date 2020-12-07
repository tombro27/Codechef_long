#include <bits/stdc++.h> 
using namespace std; 
//----------------------------------------------------------
int partition(int arr[], int p, int r)
{
    int pivot = arr[r];
    
    while (p < r)
    {
        while (arr[p] > pivot)
        {
            p++;
        }
        while (arr[r] < pivot)
        {
            r--;
        }
        if (arr[p] == arr[r])
        {
            p++;
        }
        else if (p < r)
        {
            int tmp = arr[p];
            arr[p] = arr[r];
            arr[r] = tmp;
        }
    }
    return r;
}
void quickSort(int * arr, int p, int r)
{
    if (p < r)
    {
        int j = partition(arr, p, r);
        
        quickSort(arr, p, j - 1);
        quickSort(arr, j + 1, r);
    }
}

//----------------------------------------------------------

int main()
{
	unsigned short int t;
	unsigned int n,m=1000000007;
	bool flag;
	cin>>t;
	int *res=new int [t];
	for(int i=0;i<t;++i)
	{	flag=0;
		res[i]=0;
		cin>>n;
		int *p = new int [n];
		for(int j=0;j<n;++j)
		{
			cin>>p[j];
			if(p[j]<n)
			flag=1;
		}
		if(flag==1)
			quickSort(p,0,n-1);
		for(int j=0;j<n;++j)
		{	
			if(p[j]<=j)
				p[j]=0;
			else
				p[j]-=j;	
			res[i]=(res[i]+p[j])%m;
		}
		delete[] p;	
	}
	for(int i=0;i<t;++i)
		cout<<res[i]<<endl;
	delete[] res;
	return 0;
}