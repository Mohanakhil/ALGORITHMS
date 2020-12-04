package importantAlgorithms;
import java.util.Scanner;

public class InterpolationSearch {
public static int interpolationSearch(int a[],int n)
{ Scanner scan=new Scanner(System.in);
	int left=0,right=n-1,position=0;
	System.out.println("entere ele you want to search");
	int x=scan.nextInt();
	while(position<=(n-1))
	{  if(a[position]==x)
	{	System.out.printf("ele %d is found at %d index",x,position);
	return 0;	
	}
	   if(a[position]>x)
	   {  right=position-1;
	    position=((left)+(x-a[left])*(right-left)/(a[right]-a[left]));
		   
		   
	   }
	   if(a[position]<x)
	   {
		   left=position+1;
		   position=((left)+(x-a[left])*(right-left)/(a[right]-a[left]));
	   }
		
	}
	System.out.printf("%d ele is not found",x);
	return 0;
	
	
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan=new Scanner(System.in);
System.out.println("enter no of ele you want to enter");
int n=scan.nextInt();
int a[]=new int[n];
for(int i=0;i<n;i++)
{
	System.out.printf("enter %d indexed ele",i);
	a[i]=scan.nextInt();
	
}
interpolationSearch(a,n);

	}

}
