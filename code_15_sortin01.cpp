#include <bits/stdc++.h>

using namespace std;

void printArray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sort(int a[], int n){
    int i=0,j=n-1;
    while(i<j){
        if(a[i]==0){
            i++;
        }
        else if(a[j]==1){
            j--;
        }
        else{
            a[i]+=a[j];
            a[j]=a[i]-a[j];
            a[i]-=a[j];
            i++;
            j--;
        }
    }
}

int main() {
    int a[1000],n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,n);
    printArray(a,n);
    return 0;
}