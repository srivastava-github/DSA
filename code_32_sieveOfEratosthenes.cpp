#include <bits/stdc++.h>

using namespace std;

vector <int> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> Prime;
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Pushing all primes in prime-vector
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            Prime.push_back(p);
        }
    }
    return Prime;
}

int main() {
    int n;
    vector <int> primes;
    cout << "Enter the limit: ";
    cin >> n;
    primes = sieveOfEratosthenes(n);
    for(int i : primes){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}