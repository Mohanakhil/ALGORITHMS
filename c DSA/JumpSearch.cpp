//WAP TO USE JUMP SEARCH ALGO FOR SEARCHING AN ELEMENT X IN ARRAY
#include<stdio.h>
#include<math.h>
int  jumpSearch(int a[],int n)
{ int x,pointer=0;
	printf("enter ele you want to search\n");
	scanf("%d",&x);
	int step= sqrt(n);//ASSUMING STEP SIZE TO  BE SQUARE ROOT OF TOTAL ELEMENTS OF ARRAY
	
	printf("step size is %d \n",step);

	while(a[pointer]<=a[n-1])
	{ 
	if(a[pointer]<x&&a[pointer]<=a[n-1])
	{
		pointer=pointer+step;
		printf("pointer= %d \n",pointer);
	}
		
	if(a[pointer]==x)
	{
	
	printf("ele %d is found and present at %d index",x,pointer);
	return 0;
}
	if(a[pointer]>x&&a[pointer]>=0)
	{
		pointer=pointer-step;
		
		int upper=pointer+step;
		printf("upper= %d",upper);
		printf("pointer= %d \n",pointer);
		while(pointer<upper)
		{ if(a[pointer]==x) 
		{ printf("ele %d is found and present at %d index\n",x,pointer);
			return 0;
		}
		pointer++;
			printf("pointer = %d \n",pointer);
		
		}
		
	}
		
		
	}
	printf("%d is not found in array\n",x);
}
int main()
{
	int a[40],n,i;
	printf("enter no of ele in array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d index ele\n",i);
		scanf("%d",&a[i]);
	}
	jumpSearch(a,n);
}
