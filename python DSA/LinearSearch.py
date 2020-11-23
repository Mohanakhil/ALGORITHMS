# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 21:59:52 2020

@author: Venkateswarlu
"""

"""WAP  TO CREATE A FUNCTION FOR SEARCHING AN ELE BY LINEAR SEARCH
SPACE COMP- O(1),TIMECOMPL ---O(N) 
DATASTRUCTURES"""

def linearSearch(a,x,n):
    flag=False
    for i in range(n):
        if a[i]==x :
	        print(str(x)+" is found at"+str(i)+"        index");
	        flag=True
    if(flag==False):
        print(str(x)+" is not found in list");
		
n=int(input("enter no of ele in list"))
a = [ ]
for i in range(n):
    value=int(input("enter a no"))
    a.append(value)
print(a)
x=int(input("enter value to search"))
linearSearch(a,x,n)