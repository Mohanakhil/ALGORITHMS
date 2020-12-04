//jump search algorithm with O(sqrt(n)) TIMECOMPLEXITY AND O(1) SPACE COMPLEXITY
//ASSUMING INPUT IN ASCENDING ORDER
#include<iostream>
#include<math.h>
using namespace std;

int jumpSearch(int a[],int n)
{ int x;
cout<<"enter ele you want to search in array by jumpsearch\n";
cin>>x;
int step=sqrt(n);
int pointer=0;
	while(pointer<=(n-1))
	{ if(a[pointer]<x&&a[pointer]<=a[n-1])
	{
		pointer=pointer+step;
		cout<<"\npointer = "<<pointer;
	}
	if(a[pointer]==x)
{
		cout<<"\nele "<<x<<" is present at index= "<<pointer;
		return 0;
}
if(a[pointer]>x&&a[pointer]>=a[0])
{
	pointer=pointer-step;
	int upper=pointer+step;
	while(pointer<upper)
	{ if(a[pointer]==x) 
	{ cout<<"\nele "<<x<<"is present at index= "<<pointer;
		return 0;
	}
	pointer++;
	cout<<"\npointer= "<<pointer;
	}
	
}
	
	}
	cout<<"\nele "<<x<<"is not present in array";	
}
int main()
{
	int a[30],n;
	cout<<"enter no of ele in array\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter "<<i<<" index ele of array\n";
		cin>>a[i];
	}
	//CALL THE JUMPSEARCH FUNCTION
	jumpSearch(a,n);
}
