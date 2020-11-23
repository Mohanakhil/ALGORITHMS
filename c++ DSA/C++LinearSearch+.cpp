#include<iostream>
using namespace std;
void linearSearch(int a[],int x,int n)
{ int i=0;
	printf("enter ele to search");
	cin>>x;
	bool flag=true;
	for(i=0;i<n;i++)
	{ 
		if(a[i]==x)
		 {
		cout<<x<<" is present at %d"<<i;
		flag=false;
	}
	
	}
	if(flag==false) cout<<x<<" is not found";
}
int main()
{
	int a[20],x,n,i;
	cout<<"enter no of ele in array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter ele\n";
		cin>>a[i];
	}
	
    linearSearch(a,x,n);
    
}
