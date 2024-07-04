#include <bits/stdc++.h>

using namespace std;

void printVect(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
}

void rotate(vector<vector<int>>& matrix) {
    int s=0,e=matrix.size()-1,temp;
    while(s<e){
        for(int j=s;j<e-s;j++){
            temp=matrix[s][j];
            matrix[s][j]=matrix[e-j][s];
            matrix[e-j][s]=matrix[e-s][e-j];
            matrix[e-s][e-j]=matrix[j][e-s];
            matrix[j][e-s]=temp;
        }
        s++;
    }    
}

int main() {
    vector < vector <int>> v;
    int n;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++){
        v[i].resize(n);
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    printVect(v);
    rotate(v);
    printVect(v);
    return 0;
}