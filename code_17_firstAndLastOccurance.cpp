#include <bits/stdc++.h>

using namespace std;

int firstOccurance(int arr[], int size, int key){
    int start=0,end=size-1,ans=-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key){
    int start=0,end=size-1,ans=-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


int main() {

    int arr[1000],n,key,fo,lo;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value for key : ";
    cin>>key;
    fo=firstOccurance(arr,n,key);
    lo=lastOccurance(arr,n,key);
    cout<<"The first occurance of "<<key<<" is at "<<fo<<" index"<<endl;
    cout<<"The last occurance of "<<key<<" is at "<<lo<<" index"<<endl;
    
    return 0;
}