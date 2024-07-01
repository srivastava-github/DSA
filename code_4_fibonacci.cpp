#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,a=0,b=1;
    cout<<"Enter the number of terms of fibonacci numbers you need to print : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<b<<" ";
            b+=a;
        }
        else{
            cout<<a<<" ";
            a+=b;
        }
    }
    return 0;
}