#include <bits/stdc++.h>

using namespace std;

//Hamming Number : number of 1(s)in the binary repreentation of the number

int main() {
    int n,c=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
        if(n&1==1){
            c++;
        }
        n=n>>1;
    }
    cout<<c;
    return 0;
}