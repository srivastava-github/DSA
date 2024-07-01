#include <bits/stdc++.h>

using namespace std;

int hammNum (int n){
    int c=0;
    while(n){
        if(n&1==1){c++;}
        n=n>>1;
    }
    return c;
}

int main() {
    int num1,num2;
    cout<<"Enter the numbers : ";
    cin>>num1>>num2;
    cout<<"The Total number of set bits in "<<num1<<" and "<<num2<<" are "<<hammNum(num1)+hammNum(num2)<<endl;
    return 0;
}