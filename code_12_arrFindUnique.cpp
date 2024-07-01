#include <bits/stdc++.h>

using namespace std;

/*The number of elements in the array is 2n+1
 'n' elemts are duplicate(present twice) annd 1 element is present once
  We have to print the single element*/

int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i]; //We use XOR(^) : a^a=0 and a^0=a : a^b^c^a^b=c as a^a and b^b become 0 and 0^c^0 gives c
    }
    return ans;
}

int main() {
    int arr[100], size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int unique =findUnique(arr,size);
    cout<<"The Unique element is : "<<unique;

    return 0;
}