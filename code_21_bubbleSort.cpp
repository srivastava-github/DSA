#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    bool s=true;
    for(int j=n-1;j>0 && s;j--){
        s=false;
        for(int i=0;i<j;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                s=true;
            }
        }
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
    bubbleSort(arr,n);
    printArr(arr,n);
    return 0;
}