#include <bits/stdc++.h>

using namespace std;

vector<int> beautifulArray (int n){
    vector<int> ans;
    for(int i=1;i<=n;i++){
        ans.push_back(i);
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    while((t--)>0){
        int n;
        cin>>n;
        vector<int> ans;
        ans.clear();
        ans.resize(n);
        ans=beautifulArray(n);
        for(int i : ans){
            cout<<i<<" ";
        }cout<<endl;
    }
    return 0;
}