#include <bits/stdc++.h>

using namespace std;

void printVect(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
}

void printSpiral(vector<vector<int>> &v){
    int r1=0,r2=v.size()-1,c1=0,c2=v[0].size()-1;
    while((r1<=r2)&&(c1<=c2)){
        for(int i=c1;(i<=c2)&&(r1<=r2)&&(c1<=c2);i++){
            cout<<v[r1][i]<<" ";
        }
        r1++;
        for(int i=r1;(r1<=r2)&&(c1<=c2)&&(i<=r2);i++){
            cout<<v[i][c2]<<" ";
        }
        c2--;
        for(int i=c2;(i>=c1)&&(r1<=r2)&&(c1<=c2);i--){
            cout<<v[r2][i]<<" ";
        }
        r2--;
        for(int i=r2;(i>=r1)&&(r1<=r2)&&(c1<=c2);i--){
            cout<<v[i][c1]<<" ";
        }
        c1++;
    }cout<<endl;
}

int main() {
    vector <vector <int>> v;
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    v.resize(n);
    cout<<"Enter elements row wise : ";
    for(int i=0;i<n;i++){
        v[i].resize(m);
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    printVect(v);
    printSpiral(v);
    return 0;
}