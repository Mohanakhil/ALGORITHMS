//WAP TO SEARCH AN ELEMENT USING INTERPOLATION SEARCH
//ASSUMING INTIAL POSITION= 
/*pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]

arr[] ==> Array where elements need to be searched
x     ==> Element to be searched
lo    ==> Starting index in arr[]
hi    ==> Ending index in arr[]


HERE lo=0
arr[lo] will be taken from user
hi=(n-1)
arr[hi] will be taken from user
*/
#include<iostream>
using namespace std;
int interpolationSearch(int a[],int n)
{ int x=0;
	cout<<"enter ele you want to search by interpolation method\n";
	cin>>x;
	int left=0,right=n-1,position=0;
	while(position<=(n-1))
	{ if(a[position]==x)  
	{
		cout<<"ele "<<x<<" is present at index= "<<position;
		return 0;
	}
	if(a[position]>x)
	{  right=position-1;
	   position=(int)(left+(x-a[left])*(right-left)/(a[right]-a[left]));	
	}
	if(a[position]<x)
	{
		left=position+1;
		position=(left+((x-a[left])*(right-left))/(a[right]-a[left]));
	}
		
	}
	cout<<"ele "<<x<<"is not found in array";
	return 0;
	
}
int main()
{
	int a[30],n;
	cout<<"enter no of ele in array\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter "<<i<<"index element \n";
		cin>>a[i];
	}
	interpolationSearch(a,n);
	
}
