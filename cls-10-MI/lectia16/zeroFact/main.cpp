#include <iostream>

using namespace std;

int putere5(int num) {
    int putere = 0;
    while (num % 5 == 0) {
        putere++;
        num /= 5;
    }

    return putere;
}

int nz(int n) {
    int rezultat = 0;

    for (int i = 5; i <= n; i += 5) {
        rezultat += putere5(i);
    }

    return rezultat;
}

int main() {
    int n;
    cin >> n;

    cout << nz(n) << '\n';

    return 0;
}
