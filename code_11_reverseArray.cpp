#include <bits/stdc++.h>

using namespace std;

void revArr(int arr[], int size){
    for(int i=0;i<size/2;i++){
        arr[size-i-1]+=arr[i];
        arr[i]=arr[size-i-1]-arr[i];
        arr[size-i-1]=arr[size-i-1]-arr[i];
    }
}

int main() {
    int arr[100],size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    revArr(arr,size);
    cout<<"The reverse array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}