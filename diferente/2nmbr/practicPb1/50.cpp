#include <iostream>

using namespace std;

int factorial(long long n) {
    long long rez = 1;
    for (long long i = 1; i <= n; i++) {
        rez *= i;
    }
    return rez;
}

long long main() {
    long long n;
    cin >> n;

    long long suma = 0;

    for (long long i = 1; i <= n; i++) {
        suma += factorial(i);
    }

    cout << "Rezultatul este " << suma << '\n';

    return 0;
}