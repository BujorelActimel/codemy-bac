#include <iostream>

using namespace std;

int nrCifre(int nr) {
    int contor = 0;

    while (nr > 0) {
        contor++;
        nr = nr / 10;
    }

    return contor;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (nrCifre(a[i]) % 2 == 1) {
            cout << "NU\n";
            return 0;
        }
    }

    cout << "DA\n";
    return 0;
}
