#include <bits/stdc++.h>

using namespace std;
/*Given 2 sorted non decreasing arrays print the intersecting elements in both the arrays*/

void intersection(int a[], int n1, int b[], int n2){
    int i=0,j=0;
    bool c=1;
    while(i<n1 && j<n2){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
            c=0;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    if(c){
        cout<<-1;
    }
}

int main() {
    int a[1000],b[1000],n1,n2;
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    intersection(a,n1,b,n2);
    return 0;
}