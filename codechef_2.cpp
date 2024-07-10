#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    while(true){
        if(isPrime(n)){
            return n;
        }
        n++;
    }
}

long long numberHunt(int n){
    int n1=nextPrime(n);
    cout<<"Prime 1 : "<<n1<<endl;
    int n2=nextPrime(n1+1);
    cout<<"Prime 2 : "<<n2<<endl;
    return n1*n2;
}

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int x;
	    cin>>x;
	    cout<<numberHunt(x)<<endl;
	}
}
