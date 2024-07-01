#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    int i=1;
    while(i<n){
        int temp = arr[i], j=i;
        while(j>0 && arr[j-1]>temp){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
        i++;
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
    insertionSort(arr,n);
    printArr(arr,n);
    return 0;
}