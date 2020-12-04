//WAP TO DO EXPONENTIAL SEARCH
#include<stdio.h>
int exponentialSearch(int a[],int n)
{ int x=0;
	printf("enter ele to search\n");
	scanf("%d",&x);

	int step=1;
	int pos=0;
	printf("n/2-1= %d\n",n/2-1);
	while(pos<=(n-1))
	{
		if(a[pos]==x)
		{ printf(" first if pos= %d\n",pos);
			printf("ele %d is present at index= %d",x,pos);
			return 0;
		}
		if(a[pos]<x)
		{ printf("second if pos= %d\n",pos);
			pos=pos+step;
			
			
		}
		if(a[pos]>x)
		{ 
		 pos=pos-step;
		 printf("third if pos= %d\n",pos);
		 int upper=pos+step;
		 printf("upper= %d and step= %d\n",upper,step);
		 while(pos<=upper)
		 { if(a[pos]==x) {
		 printf("ele %d is present at index= %d",x,pos);
	      return 0;
		  }
		 else
		 pos++;
		 	
		 }	
		}
		if(pos<=((n/2)-2))
	     {
		   step=step+1;
	     }
		
		
	}
	printf("ele %d is not found in array",x);
		return 0;
	
}
int main()
{
	int a[20],n;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter %d ele in array",i);
		scanf("%d",&a[i]);
		
	}
	exponentialSearch(a,n);
}
