#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int>&v){
    if((v.size()==0)||(v.size()==1)){
        return true;
    }
    if(v[v.size()-1]<v[v.size()-2]){
        return false;
    }
    v.pop_back();
    return isSorted(v);
}

int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    cout<<"Is Sorted : "<<isSorted(v);
    return 0;
}