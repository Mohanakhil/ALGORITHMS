package com.dsa.implementation;
import java.util.Scanner;
public class BinarySearch {
	Scanner scan=new Scanner(System.in);
public static int binarySearch(int a[],int n)
{
	int x=0,left=0,right=n-1,middle=0;
	System.out.println("enter ele you want to search");
	x=scan.nextInt();
	while(left<=right)
	{ middle=(left)+(right-1)/2;
	if(x>a[middle])
		left=middle+1;
	if(x<a[middle])
		right=middle-1;
	if(x==a[middle])
	{System.out.println("ele is ")
		return 0;
	}
		
	}
	
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
System.out.println("enter no of ele");

int n=scan.nextInt();
int a[]=new int[n];
for(int i=0;i<n;i++)
{ a[i]=scan.nextInt();
	
}
binarySearch(a,n);
	}

}
