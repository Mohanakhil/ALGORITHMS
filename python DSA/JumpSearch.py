# -*- coding: utf-8 -*-
"""
Created on Thu Dec  3 15:11:36 2020

@author: Venkateswarlu
"""
#WAP TO SEARCH AN ELEMENT BY JUMP SEARCH 
#TIME COMPLEXITY -- O(sqrt(n))
#SPACE COMPLEXITY IS O(1) AND ASSUMING  STEP AS SQUARE ROOT
import math
def jumpSearch( a,n):
    x=int(input("enter ele you want to search"))
    print(x)
    position=0
    step = (int) (math.sqrt(x))
    while(position<=(n-1)):
        if(a[position] < x):
            position=position+step
            print("postion= "+str(position))
            print(position)
        if(a[position]==x):
            print("ele "+str(x)+"is present at index= "+str(position))
            return 0
        if(a[position]>x):
            position=position-step
            print("postion= "+str(position))
            upper=position+step
            while( position<upper):
                if(a[position]==x):
                    print("ele "+str(x)+"is present at index="+str(position))
                    return 0
                position=position+1
    print("ele "+str(x)+"is not found in list")
            
            
            
    
    
n=int(input("enter no of ele in list\n"))
a= [ ]
for i in range(n):
    ele=(int)(input("enter ele of "+str(i)+"index "))
    a.append(ele)
jumpSearch(a,n)
    
