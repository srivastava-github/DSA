#include <bits/stdc++.h>

using namespace std;

int main() {
    int row;
    cout<<"Enter number of rows : ";
    cin>>row;
    vector<vector<int>> v(row);
    vector<int> col(row);
    for(int i=0;i<row;i++){
        cout<<"Enter column size for row "<<i+1<<" : ";
        cin>>col[i];
        v[i].resize(col[i]);
        cout<<"Enter Values :"<<endl;
        for(int j=0;j<col[i];j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<row;i++){
        cout<<"Row "<<i+1<<" -> ";
        for(int j=0;j<col[i];j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}