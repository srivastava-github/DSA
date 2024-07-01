#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findMin(int arr[],int s, int e){
    int min=INT_MAX, in=-1;
    for(int i=s;i<=e;i++){
        if(arr[i]<min){
            min=arr[i];
            in=i;
        }
    }
    return in;
}

void selectionSort(int arr[], int n){
    int in=-1;
    for(int i=0;i<n-1;i++){
        in=findMin(arr,i,n-1);
        swap(arr[i],arr[in]);
    }
}

int main() {
    int arr[1000],n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    printArr(arr,n);
    return 0;
}