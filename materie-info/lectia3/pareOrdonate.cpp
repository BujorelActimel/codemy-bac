#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ultimulPar = -10000;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (a[i] > ultimulPar) {
                ultimulPar = a[i];
            } else {
                cout << "NU\n";
                return 0;
            }
        }
    }

    cout << "DA\n";

    return 0;
}
