#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout<<"Enter the value for n : ";
    cin>>n;
    for (int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<n-j+1;
        }
        for(int k=0;k<2*i;k++){
            cout<<"*";
        }
        for(int l=n;l>i;l--){
            cout<<l-i;
        }
        cout<<endl;
    }
    return 0;
}
