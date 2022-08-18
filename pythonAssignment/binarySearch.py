# Binary Search in python

def binarySearch(array,x,low,high):

    # Repeat until the pointers low and high meet each other
    while low<=high:

        mid=low+(high-low)//2

        if array[mid]==x :
            return mid

        elif array[mid]>x :
            high=mid-1

        else :
           low=mid+1

    return -1

array=[2,4,5,8,11,16,20]
x=16

result=binarySearch(array,x,0,len(array)-1) # Calling Function 

if result != -1:
    print("Element is present at index " + str(result))
else:
    print("Not found")
