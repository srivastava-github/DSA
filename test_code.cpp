#include <bits/stdc++.h>

using namespace std;

unsigned long long factorial(unsigned long long n, unsigned long long m){
    unsigned long long fact = 1 ;
    for(int i=2;i<=n;i++){
        fact*=i%m;
    }
    return fact;
}

int main() {
    unsigned long long n,m=1000000007;
    cin>>n;
    cout<<factorial(n,m);
    return 0;
}