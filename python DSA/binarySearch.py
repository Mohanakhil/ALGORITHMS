# -*- coding: utf-8 -*-
"""
Created on Tue Nov 24 21:59:11 2020

@author: Venkateswarlu
"""

def binarySearch(a,x,n):
    left=0
    right=n-1
    flag=False
    while left<=right :
        if left!=right:
            middle=left+(right-1)//2
        elif left==right:
            middle=left
        if x<a[middle]:
            right=middle-1
        elif x>a[middle]:
            left=middle+1
        elif x==a[middle]:
            print("ele"+str(x)+"is present at index= "+str(middle))
            flag=True
            break
    if flag==False:
        print("NO RECORD OF "+str(x)+"is found in list");
    elif flag==True:
        print("records are found and displayed above")
        
    
  
    
a=[ ]
n=int(input("enter no of ele in list\n"))
for i in range(n):
    print("enter your "+str(i)+"ele of list\n");
    ele=int(input())
    a.append((ele))
i=0
print("\n")
for i in range(n):
    print(a[i])
print("enter ele to be searched for\n")
x=int(input())
binarySearch(a,x,n)
    