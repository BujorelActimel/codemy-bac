#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

     // sortam numerele
    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (a[i] > a[j]) {
                // inversez
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
    for (int i = k; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                // inversez
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    cout << '\n';
    return 0;
}