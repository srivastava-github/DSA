#include <bits/stdc++.h>

using namespace std;

int partitionVect(vector<int>&v,int start, int end){
    int part=start;
    int pivot=v[start];
    for(int i=start+1;i<=end;i++){
        if(pivot>v[i]){
            part++;
            swap(v[part],v[i]);
        }
    }
    swap(v[start],v[part]);
    return part;
}

void quickSort(vector<int>&v,int start, int end){
    if(start>=end){
        return;
    }
    int part =partitionVect(v,start,end);
    quickSort(v,start,part-1);
    quickSort(v,part+1,end);
}

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quickSort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}