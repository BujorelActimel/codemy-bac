#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // transform numerele in cifra minima
    for (int i = 0; i < n; i++) {
        int cifraMin = 9;
        while (a[i] != 0) {
            cifraMin = min(cifraMin, a[i] % 10);
            a[i] /= 10;
        }
        a[i] = cifraMin;
    }


    // sortam numerele
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }

    int i = 1;
    while (a[0] == 0 && i < n) {
        if (a[i] != 0) {
            swap(a[0], a[i]);
        }
        i++;
    } 

    for (int i = 0; i < n; i++) {
        cout << a[i];
    }

    cout << '\n';
    return 0;
}