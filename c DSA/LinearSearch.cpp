//WAP  TO CREATE A FUNCTION FOR SEARCHING AN ELE BY LINEAR SEARCH
//SPACE COMP- O(1),TIMECOMPL- O(N) 
//DATASTRUCTURES
#include<stdio.h>
void linearSearch(int a[],int x,int n)//function to do linear search
{ int i=0; bool flag=false;
for(i=0;i<n;i++)
{
	if(a[i]==x) { flag=true;
	printf("result is found and present at index %d\n",i);}
}
if(flag==false) printf("%d is not found\n",x);
}
	
int main()
{
	int a[20],x,n,i=0;
	printf("enter no of ele in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter ele\n");
		scanf("%d",&a[i]);
	}
	printf("enter ele to search");
	scanf("%d",&x);
search(a,x,n);
	
}
