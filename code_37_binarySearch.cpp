#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int *arr,int start, int end, int key){
    //base case
    if(start>end){
        return false;
    }

    //locating middle element
    int mid=start+(end-start)/2;

    //return true if key found
    if(arr[mid]==key){
        return true;
    }

    //check if key could be present in left part of the array or the right part
    if(arr[mid]>key){
        return binarySearch(arr,start,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,end,key);
    }
}

int main() {
    int n,key;
    cin>>n; //input for number of elements
    int *arr=new int[n]; //dynamic memory allocation of array

    //taking input for array elements and then the key
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;

    //check if key is present
    cout<<"Found : "<<binarySearch(arr,0,n-1,key);
    return 0;
}