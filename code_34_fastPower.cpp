#include <iostream>

using namespace std;

long long fastPower(long long base, long long exp) {
    if (exp == 0) {
        return 1;
    }
    long long half = fastPower(base, exp / 2);
    if (exp % 2 == 0) {
        return half * half;
    } else {
        return half * half * base;
    }
}

int main() {
    long long base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    cout << "Result: " << fastPower(base, exp) << endl;

    return 0;
}