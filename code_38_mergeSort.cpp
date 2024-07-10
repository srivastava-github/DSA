#include <bits/stdc++.h>

using namespace std;

void printvect(vector<int>& v){
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;
}

void mergeVect(vector<int>&v,int start, int mid, int end){
    int leftSize = mid-start+1, rightSize=end-mid;
    vector<int>left(leftSize),right(rightSize);
    for(int i=0;i<leftSize;i++){
        left[i]=v[start+i];
    }
    for(int i=0;i<rightSize;i++){
        right[i]=v[mid+1+i];
    }
    int leftIndex=0,rightIndex=0,mainIndex=start;
    while(leftIndex<leftSize && rightIndex<rightSize){
        if(left[leftIndex]>right[rightIndex]){
            v[mainIndex++]=right[rightIndex++];
        }
        else{
            v[mainIndex++]=left[leftIndex++];
        }
    }
    while(leftIndex<leftSize){
        v[mainIndex++]=left[leftIndex++];
    }
    while(rightIndex<rightSize){
        v[mainIndex++]=right[rightIndex++];
    }
}

void mergeSort(vector<int>& v, int start, int end){
    //base case
    if(start>=end){
        return;
    }
    int mid=start + (end-start)/2;
    mergeSort(v,start,mid);
    mergeSort(v,mid+1,end);
    mergeVect(v, start, mid, end);
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergeSort(v,0,n-1);
    printvect(v);
    return 0;
}