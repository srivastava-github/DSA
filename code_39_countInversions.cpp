#include <bits/stdc++.h>

using namespace std;

int localInversions(vector<int>& v){
    int count=0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            count++;
        }
    }
    return count;
}

int mergeInversions(vector<int>&v, int start, int end){
    int mergeInv=0;
    int mid=start+(end-start)/2;
    int leftSize=mid-start+1;
    int rightSize=end-mid;
    vector<int>left(leftSize);
    vector<int>right(rightSize);
    for(int i=0;i<leftSize;i++){
        left[i]=v[start+i];
    }
    for(int i=0;i<rightSize;i++){
        right[i]=v[mid+1+i];
    }
    int leftIndex=0,rightIndex=0,mainIndex=start;
    while(leftIndex<leftSize && rightIndex<rightSize){
        if(left[leftIndex]>right[rightIndex]){
            mergeInv+=(leftSize-leftIndex);
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
    return mergeInv;
}

int globalInversions(vector<int>& v, int start, int end){
    if(start>=end){
        return 0;
    }
    int mid=start+(end-start)/2;
    return globalInversions(v,start,mid) + globalInversions(v,mid+1,end) + mergeInversions(v,start,end);
}

int main() {
    vector<int> v;
    int n;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Number of Local Inversions -> "<<localInversions(v)<<endl;
    cout<<"Number of Global Inversions -> "<<globalInversions(v,0,v.size()-1)<<endl;
    return 0;
}