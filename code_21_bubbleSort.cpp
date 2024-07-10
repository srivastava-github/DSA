#include <bits/stdc++.h>

using namespace std;

void printVect(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort (vector<int> &v,int size){
    if(size==1){
        return;
    }
    bool Sorted = true;
    for(int i=0;i<size-1;i++){
        if(v[i]>v[i+1]){
            swap(v[i],v[i+1]);
            Sorted = false;
        }
    }
    if(Sorted){
        return;
    }
    bubbleSort(v, size-1);
}

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bubbleSort(v,n);
    printVect(v);
    return 0;
}