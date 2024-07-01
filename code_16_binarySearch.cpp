#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0,end=size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main() {
    int arr[1000], n, key;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of array in ascending order :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key you want to search : ";
    cin>>key;
    int i=binarySearch(arr,n,key);
    if(i>=0){
        cout<<"Element "<<key<<" found at "<<i<<"-th index";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}