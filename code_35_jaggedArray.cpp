
#include <bits/stdc++.h>

using namespace std;

int main() {
    int row;
    cout<<"Enter the number of rows you want in your array : ";
    cin>>row;
    int** arr = new int* [row];
    int* col = new int[row];
    for(int i=0;i<row;i++){
        cout<<"Enter the number of columns in row number "<<i+1<<" : ";
        cin>>col[i];
        arr[i]=new int[col[i]];
        cout<<"Enter elements : "<<endl;
        for(int j=0;j<col[i];j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        cout<<"Row -"<<i+1<<" -> ";
        for(int j=0;j<col[i];j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        delete []arr[i];
    }
    delete []col;
    delete []arr;
    return 0;
}
