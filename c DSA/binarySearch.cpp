//BINARY SEARCH(SEARCHING ALGORITHMS)(//ASSUMING INPUT TO BE IN ASCENDING ORDER)
#include<stdio.h>
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void binarySearch(int a[],int x,int n)
{
	int left=0,right=n-1,middle;
	bool flag;
	while(left<=right)
	{ if(left!=right){middle=left+(right-1)/2;;
}
else if(left==right){
	middle=left;
}
	if(a[middle]==x) { flag=true;
	printf("\n%d is found at index= %d\n",x,middle);
	break;
	}
	if(x>a[middle]) left=middle+1;
	if(x<a[middle]) right=middle-1;	
	
	}
	if(flag==false) printf("\n%d is not found at all in array \n",x);
	else if(flag==true) printf("\n%d is found and displayed above\n",x);
		
	
}
int main()
{
	int a[10],n,x;
	printf("enter no of ele \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{ printf("enter ele into array\n");
		scanf("%d",&a[i]);
	}
	printf("enter ele you want to search\n");
	scanf("%d",&x);
	print(a,n);
	binarySearch(a,x,n);
	
}
