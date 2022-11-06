
def binarySearch(array,x,low,high):

    
    while low<=high:

        mid=low+(high-low)//2

        if array[mid]==x :
            return mid

        elif array[mid]<x :
            if array[low]>array[mid] and array[low]<=x:
                high = mid-1
            else:
                low=mid+1
        else :
           if array[high]<array[mid] and array[high]>=x:
            low=mid+1
           else:
            high = mid-1;

    return -1

array=[11,16,20,2,4,5,8]
x=8

result=binarySearch(array,x,0,len(array)-1) # Calling Function 

if result != -1:
    print("Element is present at index " + str(result))
else:
    print("Not found")