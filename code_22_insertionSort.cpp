#include <bits/stdc++.h>

using namespace std;

void printVect(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void insertionSort (vector<int> &v,int size){
    if(size==1){
        return;
    }
    insertionSort(v , size-1);
    int i=size-1,temp;
    temp=v[i];
    while(i>0 && v[i-1]>temp ){
        v[i]=v[i-1];
        i--;
    }
    v[i]=temp;
    cout<<"Iteration "<<size-1 <<" : ";
    printVect(v);
}

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    insertionSort(v,n);
    cout<<"Final : ";
    printVect(v);
    return 0;
}