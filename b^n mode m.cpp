#include <iostream>

using namespace std;

long long pow_mod(long long b, long long n, long long m) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) {
            res = (res * b) % m;
        }
        b = (b * b) % m;
        n >>= 1;
    }
    return res;
}

int main() {
    long long b, n, m;
    cout << "Enter base b: ";
    cin >> b;
    cout << "Enter exponent n: ";
    cin >> n;
    cout << "Enter modulus m: ";
    cin >> m;
    cout << b << "^" << n << " mod " << m << " = " << pow_mod(b, n, m) << endl;
    return 0;
}

