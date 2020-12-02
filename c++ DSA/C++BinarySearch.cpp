//WAP TO SEARCH FOR ELE BY BINARY SEARCH
#include<iostream>
using namespace std;
int binarySearch(int a[],int n)
{ int x,left,right,middle;
	cout<<"enter ele you want to serach";
	cin>>x;
	left=0;
	right=n-1;
	while(left<=right)
	{
		 middle=(left+(right-1)/2);
		if(x>a[middle])
		{ left=middle+1;
			
		}
		if(x<a[middle])
		{
			right=middle-1;
		}
		if(x==a[middle])
	{
			cout<<"ele "<<x<<"is present at index= "<<middle;
			return 0;
	}
		
	}
	cout<<"ele is not present";
}
int main()
{
	int a[20],n,i;
	cout<<"enter no of ele in array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{ cout<<"enter "<<i<<" ele ";
	cin>>a[i];
	}
	binarySearch(a,n);
	
}
