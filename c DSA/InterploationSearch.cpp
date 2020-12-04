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
#include<stdio.h>
int interpolationSearch(int a[],int n)
{ int x=0,position=0;
int left=0,right=n-1;
 printf("enter ele you want to search\n");
     scanf("%d",&x);
	//ASSUMING ARRAY INDEX STARTS WITH 0

	printf("position= %d\n",position);
	while(position<=(n-1))
	{  if(a[position]==x)
	{
		printf("ele %d is found at index %d\n",x,position);
		return 0;
	}
	if(a[position]>x)
	{  right=position-1; 
	
			position = ( int )(left+ (x-a[left])*(right-left) / (a[right]-a[left]) );
				printf("position= %d\n",position);
		
	}
	if(a[position]<x)
	{
		left=position+1;
		position = ( int )(left+ (x-a[left])*(right-left) / (a[right]-a[left]) );
			printf("position= %d\n",position);
		
	}
	
	}
    printf("ele %d is not found in array",x);
		
	
	
	return 0;
}
int main()
{ int a[30],n;
printf("enter no of ele in array\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	printf("enter %d index ele\n",i);
	scanf("%d",&a[i]);
}
interpolationSearch(a,n);
	
}
