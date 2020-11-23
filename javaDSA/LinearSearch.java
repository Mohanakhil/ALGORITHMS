//WAP  TO CREATE A FUNCTION FOR SEARCHING AN ELE BY LINEAR SEARCH
//SPACE COMP- O(1),TIMECOMPL ---O(N) 
//DATASTRUCTURES
package com.algorithms.searching;
import java.util.Scanner;
public class LinearSearch
{ 
public static void linearSearch(int a[],int x,int n)
{ int i=0;
boolean flag=false;
for(i=0;i<n;i++)
{ if(a[i]==x) System.out.printf("%d is found at %d index of array",x,i);
flag=true;
}
if(flag==false) System.out.printf("%d is not present");
}
public static void main(String args[])
{ Scanner scan=new Scanner(System.in);
System.out.println("enter no of ele in array\n");
int a[]=new int[20];
int n=scan.nextInt();
for(int i=0;i<n;i++)
{ System.out.println("enter ele");
a[i]=scan.nextInt();
}
System.out.println("enter ele to search\n");
int x=scan.nextInt();
linearSearch(a,x,n);
}
}