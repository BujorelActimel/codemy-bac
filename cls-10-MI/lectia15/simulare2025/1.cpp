#include <iostream>

using namespace std;

int sumaCifre(int num) {
    int suma = 0;
    while (num) {
        suma += (num % 10);
        num /= 10;
    }
    return suma;
}

void harsad(int k, int &n) {
    for (int num = k; num >= 0; num--) {
        if ((num % sumaCifre(num)) == 0) {
            n = num;
            return;
        }
    }
}

int main() {
    int n=0, k;
    cin >> k;

    // cout << 2025 % sumaCifre(2025);

    harsad(k, n);

    cout << n << '\n';
    return 0;
}