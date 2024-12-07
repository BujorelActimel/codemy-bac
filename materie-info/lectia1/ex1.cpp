#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // sortam numerele
    // for (int i = 0; i < n-1; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (a[i] > a[j]) {
    //             // inversez
    //             int aux = a[i];
    //             a[i] = a[j];
    //             a[j] = aux;
    //         }
    //     }
    // }
    sort(a, a+n);

    for (int i = 0; i < n; i++) {
        int nr_divizori = 2;
        for (int div = 2; div <= a[i] / 2; div++) {
            if (a[i] % div == 0) {
                nr_divizori++;
            }
        }
        if (nr_divizori == 2 && a[i] != 1) {
            cout << a[i] << ' ';
        }
    }

    cout << '\n';

    return 0;
}