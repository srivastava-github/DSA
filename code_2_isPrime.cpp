#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i=2,c=1;
    cout<<"Enter a number : ";
    cin>>n;
    while(i<=sqrt(n)){
        if(n%i==0){
            c=0;
            break;
        }
        i+=1;
    }
    if(c==0){
        cout<<"The number is composite"<<endl;
    }
    else{
        cout<<"The number is prime"<<endl;
    }
    return 0;
}