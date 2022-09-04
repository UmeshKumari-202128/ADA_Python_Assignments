#include <iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];  // new array 
    int *second=new int[len2]; // new array

    int k=s;
    for(int i=0;i<len1;i++){   // copy of left side elements
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++){   // copy of right side elements
        second[i]=arr[k++];
    }

    int index1=0,index2=0;
    k=s;
    while(index1<len1&&index2<len2){      // element which is smaller will copy into arr array
        if(first[index1]<second[index2]){
            arr[k++]=first[index1++];
            
        }
        else{
            arr[k++]=second[index2++];
        }
    }

    while(index1<len1){              // if first array size > second array size then remaining elements
        arr[k++]=first[index1++];   // of fist array will get copied into arr
    }
    while(index2<len2){            // if second array size > first array size then remaining elements
        arr[k++]=second[index2++]; // of second array will get copied into arr
    }

}


void mergeSort(int *arr,int s,int e){
    if(s>=e){      // condition for no element or one element
        return;    // return same array
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);    // recursive call to function to divide it continuously
    mergeSort(arr,mid+1,e); // until only one element left
    merge(arr,s,e);        // function for merging
}
int main(){
    int arr[10]={2,5,1,6,9,3,11,86,2,91}; // array for sorting
    int n=10;                             // size of array
    mergeSort(arr,0,n-1);                 // calling function for merge sort

    for(int i=0;i<n;i++){                 // printing sorted array
        cout<<arr[i]<<" ";
    }
    return 0;
}