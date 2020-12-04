//WAP TO WRITE A PROGRAM FOR JUMPSEARCH
package importantAlgorithms;
import java.util.Scanner;
public class JumpSearch {
public static int jumpSearch(int a[],double n)
{ Scanner scan=new Scanner(System.in);
	int pointer=0,step=0;
	step = (int) Math.sqrt(n);
	System.out.println("step="+step);
	System.out.println("enter value to search");
	int x=scan.nextInt();
	System.out.println("n= "+n);
    while(pointer<=(n-1))
	{
		if(a[pointer]<x&&a[pointer]<=a[(int) (n-1)])
		{
			pointer=pointer+step;
			System.out.println("pointer= "+pointer);
		}
		if(a[pointer]==x)
		{		System.out.printf("ele %d is present at %d index",x,pointer);
	      return 0;
		}
		if(a[pointer]>x&&a[pointer]>=a[0])
		{ pointer=pointer-step;
		System.out.println("pointer = "+pointer);
		int upper=pointer+step;
		while(pointer<=(upper))
		{ 
			if(a[pointer]==x)
			{	System.out.printf("ele %d is present at %d index ",x,pointer);
		    return 0;
		    }
			pointer++;
		}
		
			
		}
	}
	System.out.println("elements not found ");
	return 0;
	
}
	public static void main(String[] args) {
	System.out.println("enter no of ele of array");
	Scanner scan=new Scanner(System.in);
	int n=scan.nextInt();
	int a[]=new int[n+1];
	for(int i=0;i<n;i++)
	{
		System.out.printf("enter %d index ele",i);
		a[i]=scan.nextInt();
	}
	//CALL THE JUMP SEARCH METHOD
	jumpSearch(a,n);

	}

}
