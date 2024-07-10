#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(vector<int>&v, int end){
    vector<vector<int>> ans;
    if(end<0){
        ans.push_back({});
        return ans;
    }
    ans=subsets(v,end-1);
    int n=ans.size();
    for(int i=0;i<n;i++){
        vector<int> temp;
        temp=ans[i];
        temp.push_back(v[end]);
        ans.push_back(temp);
    }
    return ans;
}

int main() {

    vector<int> v1 ={1,2,3,4};
    vector<vector<int>> v2 = subsets(v1,v1.size()-1);
    cout<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<"[ ";
        for(int j=0;j<v2[i].size();j++){
            cout<<v2[i][j]<<" ";
        }cout<<"]  ";
    }cout<<endl;
    return 0;
}