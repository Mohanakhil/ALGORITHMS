# -*- coding: utf-8 -*-
"""
Created on Thu Dec  3 15:47:21 2020

@author: Venkateswarlu
"""
#WAP TO SEARCH AN ELEMENT BY INTERPOLATION SEARCHING
"""
pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]

arr[] ==> Array where elements need to be searched
x     ==> Element to be searched
lo    ==> Starting index in arr[]
hi    ==> Ending index in arr[]


HERE lo=0
arr[lo] will be taken from user
hi=(n-1)
arr[hi] will be taken from user
TIME COMPLEXITY=o(log2(log2 n))

"""
def interpolationSearch(a,n):
    x=int(input("enter ele you want to search"))
    left=0
    right= n-1
    position=0
    while(position<=(n-1)):
        if(a[position]==x):
            print("ele "+str(x)+"is present at "+str(position)+"index ")
            return 0
        if(a[position]>x):
            right=position-1
            position=(int)((left)+((x-a[left])*(right-left)/(a[right]-a[left])))
            print(position)
        if(a[position]<x):
            left=position+1
            position=(int)((left)+(x-a[left])*(right-left)/(a[right]-a[left]))
            print(position)
            
    print("ele "+str(x)+"is not found")
            
            
            
            
n=int(input("enter no of ele in list\n"))
a= [ ]
for i in range(n):
    ele=int(input("enter ele of index "+str(i)+"here "))
    a.append(ele)
interpolationSearch(a,n)