#include <bits/stdc++.h>

using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1, page =0;
    for(int i=0;i<n;i++){
        if(page+arr[i]<=mid){
            page+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            page=arr[i];
        }
    }
    return true;
}

int bookAllocate(int arr[], int n, int m){
    int s=0, e, sum=0, a=-1;
    if(m>n){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    e=sum;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            a=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return a;
}

int main() {
    int arr[1000],n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=bookAllocate(arr,n,m);
    cout<<a<<endl;
    return 0;
}