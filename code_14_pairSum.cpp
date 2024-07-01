#include <bits/stdc++.h>

using namespace std;

/*For a given number find out all the pairs in the given array with sum equal to the given number*/

void sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
}
void pairSum(int arr[], int n, int sum){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==sum){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            if(arr[j-1]==arr[j]){j--;}
            else {i++;}
        }
        else if(arr[i]+arr[j]<sum){
            i++;
        }
        else{
            j--;
        }
    }
}

int main() {
    int arr[1000],n,sum;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>sum;
    sort(arr,n);
    pairSum(arr,n,sum);
    return 0;
}