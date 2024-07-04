#include <bits/stdc++.h>

using namespace std;

int GCD(int n1, int n2){
    if(n1==0) return n2;
    else if(n2==0) return n1;
    else{
        if(n1>n2) return GCD(n1%n2,n2);
        else return GCD(n2%n1,n1);
    }
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout<<"GCD -> "<<GCD(n1,n2);
    return 0;
}