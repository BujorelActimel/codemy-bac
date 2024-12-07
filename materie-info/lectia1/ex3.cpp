#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

     // sortam numerele
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sumaDivI = 0;
            int sumaDivJ = 0;

            // calculeaza suma divizorilor
            for (int div = 1; div <= a[i]; div++) {
                if (a[i] % div == 0) {
                    sumaDivI += div;
                }
            }

            for (int div = 1; div <= a[j]; div++) {
                if (a[j] % div == 0) {
                    sumaDivJ += div;
                }
            }

            if (sumaDivI > sumaDivJ) {
                // inversez
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
            if (sumaDivI == sumaDivJ) {
                if (a[i] > a[j]) {
                    int aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    cout << '\n';
    return 0;
}