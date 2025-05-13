#include <iostream>

using namespace std;

void citire(int a[], int n, int i) {
    if (i == n) {
        return;
    }
    cin >> a[i];
    citire(a, n, i+1);
}

void afisare(int a[], int n, int i) {
    if (i < 0) {
        return;
    }
    cout << a[i] << ' ';
    afisare(a, n, i-1);
}

int cifre_impare(int n) {
    if (n < 10) {
        if (n % 2 == 1) {
            return n;
        }
        return 0;
    }
    if (n % 2 == 0) {
        return cifre_impare(n / 10);
    }
    return cifre_impare(n/10) * 10 + (n % 10);
}

void inloc(int a[], int n, int i) {
    if (i == n) {
        return;
    }
    a[i] = cifre_impare(a[i]);
    inloc(a, n, i+1);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    citire(a, n, 0);

    inloc(a, n, 0);

    afisare(a, n, n-1);

    cout << '\n';

    return 0;
}