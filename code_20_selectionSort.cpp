#include <bits/stdc++.h>

using namespace std;

void printVect(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int findMin(vector<int>&v, int start){
    int min=INT_MAX,index=-1;
    for(int i=start;i<v.size();i++){
        if(v[i]<min){
            min=v[i];
            index=i;
        }
    }
    return index;
}

void selectionSort (vector<int> &v,int itr=0){
    if(itr>=v.size()-1){
        return;
    }
    int minIndex = findMin(v,itr);
    swap(v[itr],v[minIndex]);
    selectionSort(v,itr+1);
}

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    selectionSort(v);
    printVect(v);
    return 0;
}